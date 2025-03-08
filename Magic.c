#include <unistd.h>  // for usleep
#include <stdio.h>
void clearScreen() 
{
system("clear"); 
}

int main() 
{ 
    sleep(1);
    
    time_t start_time = time(NULL); 
    int duration = 5;
    
    do
    {
        for (int a = 10; a > 0; a--)
        {
            printf("\033[41;33m");
            printf("\t\t%d", a);
            printf("\033[0m");
            fflush(stdout);
            usleep(35000);
            clearScreen();
            printf("\n");
            int b=10;
            while(b>a)
            {
                printf("\n");
                b--;
            }
        }
        
        clearScreen();
        
        if (time(NULL) - start_time >= duration) 
        {
            break;  
        }
        
        printf("\n\n\n\n\n\n\n\n\n");
        
        for (int c = 10; c > 0; c--)
        {
            printf("\033[41;33m");
            printf("\t\t%d", c);
            printf("\033[0m");
            fflush(stdout);
            usleep(35000); 
            clearScreen();
            int d=2;
            while(d<c)
            {
                printf("\n");
                d++;
            }
        }
        
        if (time(NULL) - start_time >= duration) 
        {
            break;  
        }
    } while (1);
    
    return 0;
}