#include <iostream>
#include "easyx.h"
#include "graphics.h"
#pragma comment(lib, "EasyXa.lib")
#pragma comment(lib, "EasyXw.lib")

int main(void)
{
    initgraph(400, 450);
    getchar();
    closegraph();
    return 0;
}