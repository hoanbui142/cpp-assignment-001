#include "groupA.h"
#include "groupA-internal.h"

void doTaskA()
{
    for(int i=0; i<3; i++)
    {
        cout << "doTaskA " << i+1 << endl;
    }
    doSubTaskA();
}