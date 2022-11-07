#include <iostream>

using namespace std;

/*DECLARING PROTOTYPES*/
void firstPattern(void);
void secondPattern(void);
void thirdPattern(void);
void fourthPattern(void);
void fifthPattern(void);
void sixthPattern(void);
void seventhPattern(void);
void eighthPattern(void);
void ninthPattern(void);
void tenthPattern(void);
void eleventhPattern(void);
void twelfthPattern(void);
void thirteenthPattern(void);
void fourteenthPattern(void);


int main(void)
{   
    /*CALLING FUNCTIONS IN MAIN*/
    firstPattern();
    secondPattern();
    thirdPattern();
    fourthPattern();
    fifthPattern();
    sixthPattern();
    seventhPattern();
    eighthPattern();
    ninthPattern();
    tenthPattern();
    eleventhPattern();
    twelfthPattern();
    thirteenthPattern();
    fourteenthPattern();

    return 0;
}

void firstPattern(void)
{
    cout << "First Pattern" << endl;
    cout << " " << endl;
    for (int j = 1; j <= 5; j++)
    {
        for (int i = 1; i <= 5; i++)
        {
            cout << i; //will output 12345
        }
        cout << endl; //will create a new line after each iteration
    }
    cout << " " << endl; //adding 2 lines of spacing between patterns
    cout << " " << endl;
}

void secondPattern(void)
{
    cout << "Second Pattern" << endl;
    cout << " " << endl;
    for (int j = 1; j <= 5; j++)
    {
        for (int i = 1; i <= 5; i++)
        {
            cout << j; //i was changed for j
        }
        cout << endl; //will create a new line after each iteration
    }
    cout << " " << endl; //adding 2 lines of spacing between patterns
    cout << " " << endl;
}

void thirdPattern(void)
{
    cout << "Third Pattern" << endl;
    cout << " " << endl;
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
    cout << " " << endl; //adding 2 lines of spacing between patterns
    cout << " " << endl;
}

void fourthPattern(void)
{
    cout << "Fourth Pattern" << endl;
    cout << " " << endl;
    for (int j = 1; j <= 5; j++)
    {
        for (int i = 5; i >= 1; i--) //i is decreasing
        {
            cout << i; //will output 54321
        }
        cout << endl; //will create a new line after each iteration
    }
    cout << " " << endl; //adding 2 lines of spacing between patterns
    cout << " " << endl;
}

void fifthPattern(void)
{
    cout << "Fifth Pattern" << endl;
    cout << " " << endl;
    for (int j = 5; j >= 1; j--) //j is decreasing
    {
        for (int i = 5; i >= 1; i--) //i is decreasing
        {
            cout << j; //will output 55555
        }
        cout << endl; //will create a new line after each iteration
    }
    cout << " " << endl; //adding 2 lines of spacing between patterns
    cout << " " << endl;
}

void sixthPattern(void)
{
    cout << "Sixth Pattern" << endl;
    cout << " " << endl;
    for (int j = 1; j <= 5; j++)
    {
        for (int i = 1; i <= j; i++) //i is constrained to j
        {
            cout << i; //will output a pyramid
        }
        cout << " " << endl; //" " used to create the empy space to the right
    } 
    cout << " " << endl; //adding 2 lines of spacing between patterns
    cout << " " << endl;
}

void seventhPattern(void)
{
    cout << "Seventh Pattern" << endl;
    cout << " " << endl;
    for (int j = 1; j <= 5; j++)
    {
        for (int i = 1; i <= 5; i++)
        {
            cout << j; //i was changed for j
        }
        cout << " " << endl; //" " used to create the empy space to the right
    } 
    cout << " " << endl; //adding 2 lines of spacing between patterns
    cout << " " << endl;
}

void eighthPattern(void)
{
    cout << "Eighth Pattern" << endl;
    cout << " " << endl;
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
    cout << " " << endl; //adding 2 lines of spacing between patterns
    cout << " " << endl;
}

void ninthPattern(void)
{
    cout << "Ninth Pattern" << endl;
    cout << " " << endl;
    for (int j = 1; j <= 5; j++)
    {
        for (int i = j; i >= 1; i--)
        {
            cout << i;
        }
        cout << " " << endl; //" " used to create the empy space to the right
    }
    cout << " " << endl; //adding 2 lines of spacing between patterns
    cout << " " << endl;
}

void tenthPattern(void)
{
    cout << "Tenth Pattern" << endl;
    cout << " " << endl;
    for (int j = 1; j <= 5; j++)
    {
        for (int i = 1; i <= j; i++) //i is constrained to j
        {
            cout << "*"; //will output a pyramid
        }
        cout << " " << endl; //" " used to create the empy space to the right
    }
    cout << " " << endl; //adding 2 lines of spacing between patterns
    cout << " " << endl;
}

void eleventhPattern(void)
{
    cout << "Eleventh Pattern (Simpler)" << endl;
    cout << " " << endl;
    for (int j = 5; j >= 1; j--)
    {
        for (int i = 1; i <= j; i++) //i is constrained to j
        {
            cout << "*"; //will output a pyramid
        }
        cout << " " << endl; //" " used to create the empy space to the right
    } 
    cout << " " << endl; //adding 2 lines of spacing between patterns
    cout << " " << endl;

    cout << "Eleventh Pattern (Complex)" << endl;
    cout << " " << endl;
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
        for (int i = 2; i <= j; i++) //i equal to 2 avoids repeating the middle line, i is constrained to j
        {
            cout << "*"; //will output a oposite pyramid
        }
        cout << " " << endl; //" " used to create the empy space to the right
    }
    cout << " " << endl; //adding 2 lines of spacing between patterns
    cout << " " << endl;
}

void twelfthPattern(void)
{
    cout << "Twelfth Pattern" << endl;
    cout << " " << endl;
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
    cout << " " << endl; //adding 2 lines of spacing between patterns
    cout << " " << endl;
}

void thirteenthPattern(void)
{
    cout << "Thirteenth Pattern" << endl;
    cout << " " << endl;
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
    cout << " " << endl; //adding 2 lines of spacing between patterns
    cout << " " << endl;
}

void fourteenthPattern(void)
{
    cout << "Fourteenth Pattern" << endl;
    cout << " " << endl;
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
    cout << " " << endl; //adding 2 lines of spacing between patterns
    cout << " " << endl;
}