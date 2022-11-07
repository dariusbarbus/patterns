# Implementing Patterns

**All the information can be found in this [video](https://www.youtube.com/watch?v=hWhMAoBhi7M&list=WL).**

**The `patterns.cpp` can be found [here](https://github.com/dariusbarbus/patterns/blob/main/patterns.cpp)**

**To see the all the patterns you can use [this website](https://www.onlinegdb.com/online_c++_compiler) to run the code.**

## First Pattern

You can start by doing a simple `for` loop.

```c++
#include <iostream>

using namespace std;

int main(void)
{
	for (int i =  1; i <= 5; i++)
	{
		cout << i; //the output is 12345
	}
}
```

Now we can loop the `for` loop in order to display it 4 times. Also, adding a `endl` outside the nested loop will create a new line after the `12345`.

```c++
#include <iostream>

using namespace std;

int main(void)
{   
    for (int j = 1; j <= 5; j++)
    {
        for (int i = 1; i <= 5; i++)
        {
            cout << i; //will output 12345
        }
        cout << endl; //will create a new line after each iteration
    } 
}
```

The output is:

```c++
12345
12345
12345
12345
12345
```

## Second Pattern

Starting with the previous code we just need to change the `i` in the `cout` to `j` so it outputs the same number per line.

```c++
#include <iostream>

using namespace std;

int main(void)
{   
    for (int j = 1; j <= 5; j++)
    {
        for (int i = 1; i <= 5; i++)
        {
            cout << j; //i was changed for j
        }
        cout << endl; //will create a new line after each iteration
    } 
}
```

This is because `i` will count up to 5, but because we are not printing it, it will count the same value five times. `j` starts at 1, then it will run 5 times as one until the next iteration of the nested `for` loop, once the first iteration ends, `j` will be two, and the new iteration starts.

The output is:

```c++
11111 //j value is 1
22222 //now j value is 2 and so on
33333
44444
55555
```

## Third Pattern

Now we will print `A B C D E`. We will start with the previous code and will be using the  [[ASCII Table|ASCII]] table to print the characters.

The starting character is `A` which is equivalent to `65` is the ASCII table so we can use that value and add one to itself in each iteration of the nested loop. We have to create a variable, in this case `int text = 65;`. Then we have to [[Casting|cast]] that value to a `char`. The variable is created in the outside loop to it resets after each line.

```c++
#include <iostream>

using namespace std;

int main(void)
{   
    for (int j = 1; j <= 5; j++)
    {
	    int text = 65; 
        for (int i = 1; i <= 5; i++)
        {
            cout << char(text) << " "; //casting the value 65 into a char
            text++; //adding 1 to the value 
        }
        cout << endl; //will create a new line after each iteration
    } 
}
```

The output is:

```c++
A B C D E 
A B C D E
A B C D E
A B C D E
A B C D E 
```

## Fourth Pattern

This is a variation of the [[Implementing Patterns#First Pattern|First Pattern]] but the numbers are going the other way around, going from five to one. We do this by starting the nested `for` with a value of 5 and decreasing it each iteration.

```c++
#include <iostream>

using namespace std;

int main(void)
{   
    for (int j = 1; j <= 5; j++)
    {
        for (int i = 5; i >= 1; i--) //i is decreasing
        {
            cout << i; //will output 54321
        }
        cout << endl; //will create a new line after each iteration
    } 
}
```

The output is:

```c++
54321
54321
54321
54321
54321
```

## Fifth Pattern

The next one is a variation of the [[Implementing Patterns#Second Pattern|Second Pattern]]. Following the same structure, we will make the same change as the previous one, instead of printing `i` we will print `j`.

```c++
#include <iostream>

using namespace std;

int main(void)
{   
    for (int j = 5; j >= 1; j--) //j is decreasing
    {
        for (int i = 5; i >= 1; i--) //i is decreasing
        {
            cout << j; //will output 55555
        }
        cout << endl; //will create a new line after each iteration
    } 
}
```

Just modify the outside loop to follow the same pattern as the inside loop.

The output is:

```c++
55555
44444
33333
22222
11111
```

## Sixth Pattern

We will start with the [[Implementing Patterns#First Pattern|First Pattern]] and modify it to make it a pyramid. It should start with 1 in the first line, 12 in the second and so on. Modify the `cout` at the end to include `cout << " " << endl;`.

```c++
#include <iostream>

using namespace std;

int main(void)
{   
    for (int j = 1; j <= 5; j++)
    {
        for (int i = 1; i <= j; i++) //i is constrained to j
        {
            cout << i; //will output a pyramid
        }
        cout << " " << endl; //" " used to create the empy space to the right
    } 
}
```

The output is: 

```c++
1 
12
123
1234
12345
```

## Seventh Pattern

The same approach will be used in the [[Implementing Patterns#Second Pattern|Second Pattern]].

```c++
#include <iostream>

using namespace std;

int main(void)
{   
    for (int j = 1; j <= 5; j++)
    {
        for (int i = 1; i <= 5; i++)
        {
            cout << j; //i was changed for j
        }
        cout << " " << endl; //" " used to create the empy space to the right
    } 
} 
```

The output is:

```c++
1 
22
333
4444
55555
```

## Eighth Pattern

This is a variation of the [[Implementing Patterns#Third Pattern|Third Pattern]] using the same concept of constraining `i` to `j`.

```c++
#include <iostream>

using namespace std;

int main(void)
{   
    for (int j = 1; j <= 5; j++)
    {
	    int text = 65; 
        for (int i = 1; i <= j; i++)
        {
            cout << char(text) << " "; //casting the value 65 into a char
            text++; //adding 1 to the value 
        }
        cout << " " << endl; //" " used to create the empy space to the right
    } 
}
```

The output is:

```c++
A  
A B
A B C
A B C D
A B C D E
```

For this loops a good rule of thumb is if the first value is repeated in every line then `i` will represent that value and the values are in increasing order then `j++`, and it can be the other way around to get the opposite result. If you are using `i++` then the condition should be `i <= value` but if you are decreasing the value then `i >= value`.

**Now the patterns get more complex**

## Ninth Pattern

Using the rule of thumb we can do the following, a pyramid of numbers in a decreasing order per line.

```c++
#include <iostream>

using namespace std;

int main(void)
{   
    for (int j = 1; j <= 5; j++)
    {
        for (int i = j; i >= 1; i--)
        {
            cout << i;
        }
        cout << " " << endl; //" " used to create the empy space to the right
    } 
}
```

Because the amount of elements per line is increasing then `j` has to increment up to five. We know the last number in the sequence is one and the values per line are in decreasing order, so we can use `i--` to decrease in each iteration and limit the value of `i` to the value of `j` at any given moment. Because `i` will should only run until it's equal to one we use `i >= 1`.

The output is:

```c++
1 
21
321
4321
54321
```

## Tenth Pattern

The first pattern where will be using symbols. This is build on the base of the [[Implementing Patterns#Sixth Pattern|Sixth Pattern]].

```c++
#include <iostream>

using namespace std;

int main(void)
{   
    for (int j = 1; j <= 5; j++)
    {
        for (int i = 1; i <= j; i++) //i is constrained to j
        {
            cout << "*"; //will output a pyramid
        }
        cout << " " << endl; //" " used to create the empy space to the right
    } 
}
```

The output is:

```c++
*
**
***
****
*****
```

## Eleventh Pattern

It is the opposite of the previous one. We have inverted the functionality of `j`.

```c++
#include <iostream>

using namespace std;

int main(void)
{   
    for (int j = 5; j >= 1; j--)
    {
        for (int i = 1; i <= j; i++) //i is constrained to j
        {
            cout << "*"; //will output a pyramid
        }
        cout << " " << endl; //" " used to create the empy space to the right
    } 
}
```

The output is:

```c++
*****
****
***
**
*
```

And if you combine them inside `main()` like this.

```c++
#include <iostream>

using namespace std;

int main(void)
{   
    for (int j = 1; j <= 5; j++)
    {
        for (int i = 1; i <= j; i++) //i is constrained to j
        {
            cout << "*"; //will output a pyramid
        }
        cout << " " << endl; //" " used to create the empy space to the right
    } 

    for (int j = 5; j >= 1; j--)
    {
        for (int i = 1; i <= j; i++) //i is constrained to j
        {
            cout << "*"; //will output a oposite pyramid
        }
        cout << " " << endl; //" " used to create the empy space to the right
    } 
}
```

And it will look like this:

```c++
* 
**
***
****
*****
*****
****
***
**
*
```

To remove the line repeating in the middle we can change the value of `i` in the second loop from 1 to 2, like `for (int i = 1; i <= j; i++)`, and that would display:

```c++
* 
**
***
****
*****
****
***
**
*
```

## Twelfth Pattern

This is a more complex pattern.

First we can write it like the [[Implementing Patterns#First Pattern|First Pattern]] replacing `i` for `*`. Because we don't want to display all of them, just only the border, we can use a `if` to create a condition of which dots will be shown. In case the condition is not met, a space `" "` will be used. A space in front of `*` is used to space out and make a perfect square, a double space `"  "` will be used.

```c++
#include <iostream>

using namespace std;

int main(void)
{   
    for (int j = 1; j <= 5; j++)
    {
        for (int i = 1; i <= 5; i++)
        {   
            if(j == 1 || j == 5 || i == 1 || i == 5)
            {
                cout << " *"; //will output * only when the condition is met
            }
            else
            {
                cout << "  "; //will output 2 spaces otherwise
            }
        }
        cout << endl; //will create a new line after each iteration
    } 
}
```

The output is:

```c++
 * * * * *
 *       *
 *       *
 *       *
 * * * * *
```

## Thirteenth Pattern

Using the previous one as a base we can make a hollow pyramid. We have to modify the `if` statement. In the previous we used `if(j == 1 || j == 5 || i == 1 || i == 5)` saying that at  any time `i` or `j` where equal to one or 5 we would display a dot. 

Now the condition is `if(i == 1 || i == j || j == 5)`, because `i` must be equal to one as it will display the first dot in every line. `i == j` means that the value of `i` has to match with the current value of `j`, if the value of `j` and `i` is two in the current iteration then display a dot, but if it's different then display a space `" "`, this is because 5 iterations of `i` is equal to one iteration of `j`. And it can only display a dot then `j` is equal to 5, 

So the list of conditions would be as follows (this a one **OR** the other)
- `i` must be equal to one
- `i` and `j` must be equal
- `j` must be equal to 5

```c++
#include <iostream>

using namespace std;

int main(void)
{   
    for (int j = 1; j <= 5; j++)
    {
        for (int i = 1; i <= 5; i++)
        {   
            if(i == 1 || i == j || j == 5)
            {
                cout << " *"; //will output * only when the condition is met
            }
            else
            {
                cout << "  "; //will output space otherwise
            }
        }
        cout << endl; //will create a new line after each iteration
    } 
}
```

And the output is:

```c++
 *        
 * *
 *   *
 *     *
 * * * * *
```


## Fourteenth Pattern

To print a full pyramid, so a triangle on both sides. We will use the [[Implementing Patterns#Tenth Pattern|Tenth Pattern]] as a base, because we only need to create two more `for` loops, one for the spaces of the left side and another one for the dots on the right side.

The left side which is the spaces is going from 5 to 1, so it would make a inverted pyramid, we can invert the first loop like `for (int i = 5; i  = j; i--)` where we are decreasing the value of `i` from five to the minimum value that is greater than `j`. 

The right side is the same as the dots printed on the left side.

```c++
#include <iostream>

using namespace std;

int main(void)
{   
    for (int j = 1; j <= 5; j++)
    {
        for (int i = 5; i >= j; i--) //will print the spaces in the left
        {
            cout << " ";
        }
        for (int i = 1; i <= j; i++) //i is constrained to j
        {
            cout << "*"; //will output half of the pyramid
        }
        for (int i = 2; i <= j; i++) //will print the dots on the right
        {
            cout << "*"; //will output half of the pyramid
        }
        cout << endl; //will create a new line after each iteration
    } 
}
```

The output is:

```c++
     *
    ***
   *****
  *******
 *********
```

