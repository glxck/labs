**Лабораторна робота №13.**
**Тема:** Строки

Лисенко Дмитро Олександрович
Студент групи КІТ-120д
07.01.20

1.	**ЗАВДАННЯ ДО РОБОТИ**
 4. Знайти всі числа які зустрічаються в тексті

2.	**БЛОХ-СХЕМА ПРОГРАМИ**
![](https://imageshack.com/i/poHElBM4p)
Рисунок 1
3.	**ДОКУМЕНТАЦІЯ В DOXYGEN**
 ![](https://imageshack.com/i/pmnitsgRp)
Рисунок 2
 ![](https://imageshack.com/i/pnE9Fy29p)
Рисунок 3
 

4.	**КОД ПРОГРАМИ**
```
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
```



5. **РЕЗУЛЬТАТ**
 ![](https://imageshack.com/i/pozqRZBup)


6.	**ВИСНОВОК**

Навчився працювати з строками
