#include <stdio.h>
#include <conio.h>
// check_eligibility
int main(){
int math_score, science_score;
 

    printf("Enter your Math_score:");
    scanf("%d", &math_score);
    
    printf("Enter your Science_score:");
    scanf("%d", &science_score);

    if (math_score >= 50 && science_score >= 50) {
        printf("You are eligible for admission.\n");
        
        if (math_score > 80 && science_score > 80) {
            printf("You qualify for a scholarship!\n");
        } else {
            printf("You do not qualify for a scholarship.\n");
        } else {
	        printf("You are not eligible for admission.\n");
    



    return 0;
}

