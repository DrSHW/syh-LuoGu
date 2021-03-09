#include <stdio.h>
#include <string.h>

int main()
{
    char str[500];
    while (gets(str)!= NULL){
        if(strcmp("ENDOFINPUT", str)) break;
        gets(str);
        int i;
        for (i = 0; i < strlen(str); i++){
            if (str[i] <= 'Z' && str[i] >= 'A'){
                str[i] -= 5;
                if (str[i] < 'A')
                    str[i] += 26;
            }
        }
        printf("%s", str);
        gets(str);
    }
    return 0;
}
