#include "types.h"
#include "stat.h"
#include "user.h"

int main()
{
    int id1=fork();
    if(id1==0)
    {
        setprio(0);
        int prio = getprio();
        sleep(1);
        printf(1, "Hi I am Child and my priority level is %d\n", prio);
    }
    else
    {
        setprio(10);
        int prio = getprio();
        sleep(1);
        printf(1, "Hi I am parent and my priority level is %d\n", prio);
    }
    exit();
}

