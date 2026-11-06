
#include <iostream>
#include <cstring>
using namespace std;

int Count(const char* str)
{
    int k = 0;

    for (int i = 0; str[i] != '\0' && str[i + 1] != '\0'; i++)
    {
        if ((str[i] == 'a' && str[i + 1] == 'a') ||
            (str[i] == 'b' && str[i + 1] == 'b') ||
            (str[i] == 'c' && str[i + 1] == 'c'))
        {
            k++;
            i++;
        }
    }

    return k;
}

void Change(const char* str, char* result)
{
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i + 1] != '\0' &&
            ((str[i] == 'a' && str[i + 1] == 'a') ||
                (str[i] == 'b' && str[i + 1] == 'b') ||
                (str[i] == 'c' && str[i + 1] == 'c')))
        {
            result[j++] = '*';
            result[j++] = '*';
            result[j++] = '*';
            i++;
        }
        else
        {
            result[j++] = str[i];
        }
    }

    result[j] = '\0';
}

int main()
{
    char str[101];
    char result[151];

    cout << "Enter string: ";
    cin.getline(str, 101);

    int k = Count(str);

    cout << "Number of pairs: " << k << endl;

    Change(str, result);

    cout << "Original string: " << str << endl;
    cout << "Modified string: " << result << endl;

    return 0;
}
