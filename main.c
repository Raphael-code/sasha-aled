/*
** EPITECH PROJECT, 2023
** B-CPE-101-PAR-1-1-myprintf-maxence.bunel
** File description:
** main
*/

int main(void)
{   
    char test1[] = "Hello";
    char test2[] = "H";
    char *test_res = strcat(test1, test2);
    printf("%s", test_res);
    return 0;
}