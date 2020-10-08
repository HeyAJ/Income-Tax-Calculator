# include <stdio.h>

int main() {

    float Income, Tax = 0.0;

    printf("Please Enter Your Net Income to Calculate Income Tax On Your Income: ");
    scanf("%f", &Income);

    if (Income>0 && Income<250000)
    {
        printf("There is No Income Tax Under 250000\n");
    }
    
    if (Income>=250000 && Income<=500000)
    {
        Tax = Tax + 0.05 * (Income - 250000);
    }

    if (Income>=500000 && Income<=1000000)
    {
        Tax = Tax + 0.20 * (Income - 500000);
    }
    
    if (Income>=1000000)
    {
        Tax = Tax + 0.30 * (Income - 1000000);
    }

    printf("the Income Tax Calculated on The Given Net Income Is: Rupees %f\n", Tax);

    return 0;
}
