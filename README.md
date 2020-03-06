# lousy-lab

This repository contains the C programs that are to be conducted in the C programming lab. These are meant to enhance the ease of understanding to write code in C language.

I have added extensive comments to some programs so that it will help a beginner to understand the code without much difficulty (some background is assumed). The programs with extensive comments are named as `XXXX_tut.c` (short for tutorial).

**These programs have been tested to work fine for all tested cases on ubuntu 16.04 with gcc 4.9.0.**  
**Although some untested edge-cases might break the code (if you find any please let me know).**    

### How to compile and run on Ubuntu Linux:
**For programs that do not use "math.h" header:**  
To Compile:  
```
$ gcc <filename.c>  
```  
To Run:  
```
$ ./a.out  
```  

#### Example:
To compile a program named `prog1_basic.c` the command you would run from the terminal (after navigating to the folder/directory containing your program would be):

```
$ gcc prog1_basic.c  
```
The above command would create an executable named `a.out` in the same directory as your program. To run this executable, run the following command:

```
$ ./a.out
```

**For programs that use "math.h" header:**  
To Compile:  
```
$ gcc <filename>.c -lm  
```
To Run:  
```
$ ./a.out  
```

#### Example:
To compile a program named `prog10_cosine.c` (which uses `math.h` header), the command you would run from the terminal (after navigating to the folder/directory containing your program would be):
```
$ gcc prog10_cosine.c -lm
```

The above command woud create an executable named `a.out` in the same directory as your program. To run this executable, run the following command:
```
$ ./a.out
```

## Further implementations
- [x] Add remaining programs
- [ ] Adding more tutorial files
- [ ] Adding sample output to every program
