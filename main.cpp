#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;
void Pause()
{
    printf("Press Enter key to continue...");
    fgetc(stdin);
}
int main()
{
    setlocale(LC_ALL,"Chinese_Taiwan.950");
    printf("%s\n","���� printf %s (�e�r������)");
    Pause();
    return 0;
}
