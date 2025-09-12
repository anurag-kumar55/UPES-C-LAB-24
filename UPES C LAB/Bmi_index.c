// WAP to compute the BMI index of the person and print the BMI values as per the following ranges.you can use the following formula to compute BMI=weight(kgs)/height(Mts)*Height(Mts).


#include <stdio.h>

int main(){
    float weight,height;
    printf("Enter weight in kgs:\n");
    scanf("%f",&weight);
    printf("Enter height in meters:\n");
    scanf("%f",&height);

    float bmi=(1.0*weight)/(height*height);
    printf("BMI: %.2f\n",bmi);

    if(bmi<15)
    printf("Stravation");
    else if (bmi<=17.5)
        printf("Anorexic");
    else if(bmi<=18.5)
        printf("Underweigth");
    else if(bmi<=24.9)
        printf("Ideal");
    else if(bmi<=25.9)
        printf("Overweigth");
    else if(bmi<=39.9)
        printf("Obese");
    else
        printf("Morbidity Obese");
    

    return 0;
}