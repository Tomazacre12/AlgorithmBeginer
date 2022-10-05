#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int h,m,s;

int main()
{
    // bat dau chuong trinh
        scanf("%d", &s);
        h = s / 3600;
        s = s - h * 3600;
        m = s / 60;

        printf("%d:%d:%d\n",h,m,s);


	// ket thuc chuong trinh
    return 0;
}