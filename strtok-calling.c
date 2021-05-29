
#include<stdio.h>
#include<string.h>

int main(int argc, char* argv[])
{
    char csv_Dest[100] = "1000,cap_net_raw,cap_sys_admin";
        const char s[2] = ",";
        char *token;

        /* get the first token */
        token = strtok(csv_Dest, s);

        /* walk through other tokens */
        while(token != NULL)
        {
            printf("%s\n", token);
            token = strtok(NULL, s);
        }

        return 0;
}