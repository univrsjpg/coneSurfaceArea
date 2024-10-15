#include "cone.c"

int main ()
{
    float fLengthSide, fRadiusBase;

    printf("Input the length of the side: ");
    scanf("%f", &fLengthSide);

    printf("\nInput the radius: ");
    scanf("%f", &fRadiusBase);

    printf("\nThe area of the base is: %.2f\n", getAreaBase(fRadiusBase));
    printf("\nThe area of the cone is: %.2f", getAreaCone(fLengthSide, fRadiusBase));

    printf("\n\nThe surface area of the cone is: %.2f", getSurfaceArea(fLengthSide, fRadiusBase));

    return 0;
}