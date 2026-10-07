#include <stdio.h>

struct Dimensions
{
    float length;
    float width;
};

struct Rectangle
{
    char name[30];
    struct Dimensions size;
};

int main()
{
    struct Rectangle rectangle = {
        "Table",
        {12.5, 6.0}
    };

    float area;

    area = rectangle.size.length * rectangle.size.width;

    printf("Object: %s\n", rectangle.name);
    printf("Length: %.2f\n", rectangle.size.length);
    printf("Width: %.2f\n", rectangle.size.width);
    printf("Area: %.2f\n", area);

    return 0;
}
