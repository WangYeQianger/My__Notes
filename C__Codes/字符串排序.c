#include <stdio.h>
#include <string.h>

#define N 81

void swap( char str1[], char str2[] );

int main(){
    char str[5][N];
    int i, j;
    
    for( i=0; i<5; i++ )
        scanf(" %s", &str[i]);
    
    for( i=0; i<4; i++ ){   
        int min = i;
        
        for( j=i+1; j<5; j++ )
            if( strcmp(str[min], str[j]) > 0 )   
                min = j;
        
        if( min != i )
            swap(str[min], str[i]);
    }
    
    printf("After sorted:\n");
    for( i=0; i<5; i++ )
        printf("%s\n", str[i]);
    
    return 0;
}

void swap( char str1[], char str2[] ){
    char temp[N];
    strcpy(temp, str1);    
    strcpy(str1, str2);
    strcpy(str2, temp);
}


//输入：red yellow blue black white
//After sorted:
//black
//blue
//red
//white
yellow
