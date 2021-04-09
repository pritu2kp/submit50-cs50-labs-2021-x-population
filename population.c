#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main (void)
{
    //TODO: Prompt for start size 
    int start_size;
    do
    {
        start_size = get_int("Start Size: \n");
    }
    while ( start_size < 9); 

    //TODO: Prompt for end size
    int end_size;
    do
    {
        end_size = get_int("End Size: \n");
    }
    while (end_size < start_size);

    //TODO: Calculate number of years untill we reach threshold 
    int current_size = start_size;
    int years_passed = 0; 

    {
        current_size = round(current_size + current_size/3 - current_size/4);
        years_passed++;
    }
    printf("Years: %i \n", years_passed);

    //TODO: Print number of years 
}
