#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:

int
float
bool
double
char
string
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //examples:
    int circuitType = -1; 
    int skinType = 100; 
    int windowSize = -20;

    float gain = 0.1f;
    float threshold = 0.2f; 
    float attackTime = 1.0f; 

    bool aiSelect = true;
    bool bypassOn = true;
    bool isPeaking = false;

    double frequencyRange = 50.0; 
    double lfoSpeed = 10.0; 
    double artifacts = 123.0; 

    char compressor = 'c';
    char flange = 'f'; 
    char granular = 'g';

    unsigned int uiSize = 1; 
    unsigned int parameters = 10;
    unsigned int encoderSize = 99;

    ignoreUnused(circuitType, skinType, windowSize, gain, threshold, attackTime, aiSelect, bypassOn, isPeaking, frequencyRange, lfoSpeed, artifacts, compressor, flange, granular, uiSize, parameters, encoderSize); //passing each variable declared to the ignoreUnused() function

}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
 } 
//1)
void compressAudio(int inputAmount = 20, int ratio = 2)
{
    ignoreUnused(inputAmount, ratio); 
}
//2)
bool uiAutoLoad(bool aiSelect = true, char compressor = 'c', int circuitType = 6)
{
    ignoreUnused(aiSelect, compressor, circuitType); 
    return {}; 
}
 //3)
int waterGrains( char granular = 'g', char flange = 'f', double artifacts = 12.20)
{
    ignoreUnused(granular, flange, artifacts); 
    return {}; 
}
 //4)
double setCloud( int windowSize = 15, int circuitType = 5,  double frequencyRange = 50.0)
{
    ignoreUnused(windowSize, circuitType, frequencyRange); 
    return {}; 
}
 //5)
void lookUi(int skinType = 30, unsigned int parameters = 3, unsigned int encoderSize = 10)
{
    ignoreUnused(skinType, parameters, encoderSize); 
} 
 //6)
int modFlange(char flange = 'f', bool bypassOn = true, double lfoSpeed = 45.0)
{
    ignoreUnused(flange, bypassOn, lfoSpeed); 
    return{};
}
 //7)
float meterSignal(unsigned int uiSize = 4, float gain = 0.1f, bool isPeaking = false)
{
    ignoreUnused(uiSize, gain, isPeaking); 
    return{};
}
 //8)
int gseriesComp( double artifacts = 50.0, int circuitType = 34, float threshold = 1.0f )
{
    ignoreUnused(artifacts, circuitType, threshold); 
    return{};
}
//9)
void multiModeType (char compressor = 'c', char flange = 'f', char granular = 'g', unsigned int uiSize = 0)
{
    ignoreUnused(compressor, flange, granular, uiSize); 
}
//10)
float lookEncorder (int skinType = 100, unsigned int uiSize = 0, unsigned int encoderSize = 99, float colour = 1.0f)
{   
    ignoreUnused(skinType, uiSize, encoderSize, colour); 
    return{};
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()

{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    //1)
    compressAudio(20, 2);
    //2)
    auto aiMode = uiAutoLoad(true, 'c', 6);
    //3)
    auto efxType = waterGrains('g', 'f', 12.20);
    //4)
    auto grainMood = setCloud(15, 5, 50.0);
    //5)
    lookUi(30, 3, 10);
    //6)
    auto multiMod = modFlange('f', true, 45.0);
    //7)
    auto routeToVu = meterSignal(4, 0.1f, false);
    //8)
    auto selectCompType = gseriesComp(50.0, 34, 1.0f);
    //9)
    multiModeType ('c', 'f', 'g', 0);
    //10)
    auto customEncoders = lookEncorder (100, 0, 99, 1.0f);

    ignoreUnused(carRented, aiMode, efxType, grainMood, multiMod, routeToVu, selectCompType, customEncoders );

    std::cout << "good to go!" << std::endl;
    return 0;    
}
