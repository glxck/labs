//
//  main.c
//  lab13
//
//  Created by Glock on 07.01.2021.
//
/**

 * \author Lysenko D.
 * \version 2.0
 * \return Числа из текста
 * \param [in]  text
 * \param [out] Числа из текста

*/
#include <locale.h>


int returnNums(char text[100])
{
    for (int i = 0; i < strlen(text); i++)
    {
        if (isdigit(text[i]) != 0)
        {
            printf("%c ", text[i]);
        }
    }
    return 0;
}

int main()
{
    setlocale(LC_ALL, "Rus");
    char text[100];
    printf("Текст: ");
    gets_s(text);
    returnNums(text);
    return 0;
}