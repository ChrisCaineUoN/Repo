#include <stdio.h>
int main(void)
{
    //declaring vars
    int revenue = 80;
    int costs = 50;
    int roi;

    //perform calcs
    roi = (100*(revenue-costs)) / costs;

    //make decision from data
    if (roi>=0)
    {
        printf ("%d\n", roi);
        }
    
    else {
        printf ("Negative ROI\n");
    }

    return 0; //gracefully exit
}