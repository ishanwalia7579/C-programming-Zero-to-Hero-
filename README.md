<h1>C programming-🛠️ &nbsp;<p>Zero To Hero -🚀 </p></h1>
<BR>
<h2>* What is c programming define ?</h2> <br>
<ul>
  <li>C is general purpose programming language reated by <strong>Dennie Ritchie</strong> at the Bell Laboratories in 1972</li>
  <li>It is a very popular language ,despite being old</li>
  <li>The main raeson for its popularity is beacuse it is a fundamental language in the feild of computer science</li>
</ul>
<br>
<br>

<h2>* Print ("Hello world")?<br>
  
```bash
  #include <stdio.h>
  int main(){
  printf("Hello World");
  reture 0;
  }
```
</h2><br>
<h2>* The basic concepts of C programming language</h2>
<ul>
  <li>Variables</li>
  <li>Keywords</li>
  <li>Constants</li>
  <li>Structure</li>
  <li>Compilation</li>
</ul>
<br>
<h3>1. Variables</h3>
<p><li>Variable is the name of a memory location which stores some data.</li></p>
<br>
<h2>* Variable Rules:-</h2>
<ol>
  <li>Variable are case sensitive.</li>
  <li>1st Character is alphabet or '_'.</li>
  <li>No comma / blank space.</li>
<li>No other symbol other that '_'.</li>
</ol>
<br>
<h2>* Different types of variables:-</h2>
<ol>
  <li>Integer -123 , -123   → → → → → ("%d")</li>
  <li>Float -12.22 , 12.44  → → → → ("%f")</li>
  <li>Char - 'a' , 'B       → → → → ("%c")</li>
</ol>

<br>
<h2>2. Keywords :-</h2>
<p><li>Reserved words that have special meaning to the compiler <strong>32</strong> keywords in C</li></p>
<br>
<h2>3.Constants</h2>
<p><li>Values that don't change (fixed)</li></p>
<h4> * Types for constants:-</h4>
<li>Integer constants</li>
<li>Real constants</li>
<li>Character constants</li>
<br>
<h2>4. Comments :-</h2>
<p>Lines that are not part of program</p>
<h4>* Types of comments :-</h4>
<ul>
  <li>Single Line</li>
  <li>Multiple Line</li>
</ul>
  <br>
  
```c
      // This single line comments
      /* This is multiple line */
```

<br>
<h3> Variable print -</h3><p>variable used for print ("%d")</p><br>

<h3>
  
```c
#include <stdio.h>
int main() {
    int myNum=100;
    printf("%d",myNum);
    return 0;
}
```
</h3>
<br>
<h3>Multiple variable-</h3>To declare more than one variable of the same type,use a comma-separates list:-

<h3>
  
```c
#include <stdio.h>
int main() {
   int x=100 , y=200 ,z=300;
   printf("%d",x+y+z);
    return 0;
}
```
</h3><br>
<br>
<h2>5. Output </h2>
<p>Cases</p>
<ol>
  <li>Integer :-</li>
  
  ```c
#include <stdio.h>
int main() {
    printf("age is %d",age); // This is Integer define ("%d")
    return 0;
}
```
<br>
  <li>Real Number :-</li>

  ```c
#include <stdio.h>
int main() {
    printf("value of pi is %f", pi);  // This is Real number define ("%f")
    return 0;
}
```
<br>
  <li> Characters :-</li>

  ```c
#include <stdio.h>
int main() {
    printf("star looks like thin %c",star);   // This character define ("%c")
    return 0;
}
```

</ol>
<br>
<h3>6. Input :-</h3>

```c
#include <stdio.h>
int main() {
    scanf("%d",&age);    // This is Input
    return 0;
}
```
<br>
<h3>7. Compilation :-</h3>
A computer program that translates C code into machine code
<br>
<br>
<h3> 8. Practice question </h3>
<ol>
  <li><a href="">1.Write a program to calculate area of a square (side is given)</a></li>
  
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
 
    
  <li><a href="">2. Write a program to calculate area of a circle (radius is given) </li>

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

</ol>
