#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <ctype.h>

const int MAX_NAME_SIZE = 1000;

typedef struct
{
    char* string;
    size_t length;
}
String;

typedef struct
{
    String name;
    String midlename;
    String surname;
    char sex;
}
Person;

size_t getWord (FILE* file, char* buff);
Person* fGetPersons (FILE* file, unsigned n);
void fPrintPersons (FILE* file, Person* person, unsigned n);

int main()
{
    SetConsoleCP (1251);
    SetConsoleOutputCP (1251);

    unsigned n = 0;
    scanf ("%u", &n);
    getchar ();

    Person* person = fGetPersons (stdin, n);

    int womenCount = 0;
    for (unsigned i = 0; i < n; i ++)
    {
        if (person[i].midlename.string[person[i].midlename.length - 1] == 'à')
        {
            person[i].sex = 'æ';
            womenCount ++;
        }
        else
            person[i].sex = 'ì';
    }

    fPrintPersons (stdout, person, n);

    printf ("%d %d\n", n - womenCount, womenCount);

    free (person[0].name.string);
    free (person);
    return 0;
}

Person* fGetPersons (FILE* file, unsigned n)
{
    Person* person = (Person*) calloc (n, sizeof (Person));
    char* buffer = (char*) calloc (n * MAX_NAME_SIZE, sizeof (char));
    char* bufferBegin = buffer;

    for (unsigned i = 0; i < n; i ++)
    {
        int wordLen = 0;

        wordLen = getWord (file, buffer);
        person[i].name.string = buffer;
        person[i].name.length = wordLen;
        buffer += wordLen + 1;

        wordLen = getWord (file, buffer);
        person[i].midlename.string = buffer;
        person[i].midlename.length = wordLen;
        buffer += wordLen + 1;

        wordLen = getWord (file, buffer);
        person[i].surname.string = buffer;
        person[i].surname.length = wordLen;
        buffer += wordLen + 1;
    }

    realloc (bufferBegin, (buffer - bufferBegin) * sizeof (char));
    return person;
}

void fPrintPersons (FILE* file, Person* person, unsigned n)
{
    for (unsigned i = 0; i < n; i ++)
    {
        fprintf (file, "%s %s %s %s\n", person[i].surname.string,
                                        person[i].name.string,
                                        person[i].midlename.string,
                                        &person[i].sex);
    }
}

size_t getWord (FILE* file, char* buff)
{
    size_t i = 0;
    char c = 0;
    while (! isspace (c = fgetc (file)))
        buff [i++] = c;

    buff [i] = '\0';
    return i;

}
