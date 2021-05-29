#include <stdio.h>
int real_complex(int ar, int br);
int imaginary_complex(int ai, int bi);
struct complex
{
    int real, img;
};
struct complex a, b, c;
int main()
{
    int cr, cim;
    printf("Enter a and b where a + ib is the first complex number.\n");
    scanf("%d%d", &a.real, &a.img);
    printf("Enter c and d where c + id is the second complex number.\n");
    scanf("%d%d", &b.real, &b.img);
    cr = real_complex(a.real, b.real);
    cim = imaginary_complex(a.img, b.img);
    printf("Sum of the complex numbers: (%d) + (%di)\n", cr, cim);
    return 0;
}
int real_complex(int ar, int br)
{
    c.real = ar + br;
    return c.real;
}
int imaginary_complex(int ai, int bi)
{
    c.img = ai + bi;
    return c.img;
}