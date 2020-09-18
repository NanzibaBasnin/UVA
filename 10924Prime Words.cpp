
#include<stdio.h>
#include<math.h>

static char s[32];

int main(){
    while (gets(s)){
        unsigned int i, sum = 0;

        for (i = 0; s[i]; ++i){
            if (s[i] >= 'a' && s[i] <= 'z')
                sum += s[i]-'a'+1;
            else
                sum += s[i]-'A'+27;
        }

        if (sum <= 2)
            printf("It is a prime word.\n");
        else if (sum % 2 == 0)
            printf("It is not a prime word.\n");
        else{
            unsigned int prime = 1, len = sqrt(sum);
            for(i = 3; i <= len; i += 2){
                if(sum % i == 0){
                    printf("It is not a prime word.\n");
                    prime = 0;
                    break;
                }
            }
            if (prime)
                printf("It is a prime word.\n");
        }
    }
    return 0;
}
