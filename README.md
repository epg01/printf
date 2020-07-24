# _Printf function similar to the printf function that appears in language C

It is a function where you can enter an unlimited number of arguments, the arguments can be of any type (the basic ones: char, int, float and double) with their respective pointers to each type.

The first argument of the function is the one that will be sent to the stdout of the environment that called it, in this case it can be the screen or the file; if we are in an operating system like linux we use the operator **>, >>** to redirect the output of the stout.

To improve the different types of data we apply the **%** character together with a **special character**, in the table below these special characters are shown. there may be spaces between the **%** character and the **special character**, such as.

*  Where **Pointer_String** is a pointer to an array of characters that contains the string **world**.
*  Where **Array**, is an array that contains the string **equation**.
*  Where **Character** is a char type variable that contains the only character **e**.

> _printf("hello %s this is the %s of lov%c\n", *Pointer_String, Array, Character);

> hello world this is the equation of love

There can be a space between% and the special character.

* Where **Number** contain the number 4.

> _printf("Number: [%"Space Character" d]", Number);

> Number: [4]
