#include<stdio.h>

int main() {
    char day; //m-mon; 2-tues; 3-wed; T; f, s, S
    printf("enter day(1-7) : " );
    scanf ("%s", &day);

    switch (day) {
        case 'm' : printf("monday \n");
                 break;
        case 't' : printf("tuesday \n");
                 break;
        case 'w' : printf("wednesday \n");
                 break;
        case 'T' : printf("thursday \n");
                 break;
        case 'f' : printf("friday \n");
                 break;
        case 's' : printf("saturday \n");
                 break;
        case 'S' : printf("sunday \n");
                 break;
        default : printf("not a valid day! \n");




    }

}

    
        

        

        
    
