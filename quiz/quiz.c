#include<stdio.h>
int main()
{

    int i;
    int ans1,ans2,ans3,ans4,ans5;
    int point1,point2,point3,point4,point5,point6,point7,point8,point9,point10;
    int point01,point02,point03,point04,point05,point06,point07,point08,point09,point010;
    // int total1,total2,total3;

    printf("\n\n   WELCOME TO THE QUIZ   \n\n");
    printf("> Press 1 to start the quiz\n");
    printf("> Press 0 to quit the quiz\n\n");


    scanf("%d",&i);

    if(i==1)
    {
        printf("The quiz has started\n\n");
    }
    else if(i==0)
    {
        printf("The quiz has ended\n\n");
    
    }
    else{
        printf("invalid\n\n");
    }
    if(i==1)
    {
        printf("A. What was the score in the Euro 2012 final?\n\n");
        printf("1. 2-0\n");
        printf("2. 3-0\n");
        printf("3. 4-0\n");
        printf("4. 5-0\n");

        printf("Enter your answer : ");
        scanf("%d",&ans1);

        if(ans1==3)
        {
            printf("Correct Answer\n");
            point1=5;
            printf("You have scored %d points\n\n", point1);
        }
        else{
            printf("Wrong Answer\n");
            point01=0;
            printf("You have scored %d points.\n\n",point01);
        }

        printf("B. Who won the Man of the Match award in the 2014 World Cup final?\n\n");
        printf("1. Mario Gotse\n");
        printf("2. Leo Messi\n");
        printf("3. Sergio Aguero\n");
        printf("4. Muller\n");

        printf("Enter your answer : ");
        scanf("%d",&ans2);

        if(ans2==1)
        {
            printf("Correct Answer\n");
            point2=5;
            printf("You have scored %d points\n\n", point2);
        }
        else{
            printf("Wrong Answer\n");
            point02=0;
            printf("You have scored %d points.\n\n",point02);
        }

        printf("C. Against which country did Wayne Rooney break the England goalscoring record?\n\n");
        printf("1. Switzerland\n");
        printf("2. Brazil\n");
        printf("3. USA\n");
        printf("4. Spain\n");

        printf("Enter your answer : ");
        scanf("%d",&ans3);

        if(ans3==1)
        {
            printf("Correct Answer\n");
            point3=5;
            printf("You have scored %d points\n\n", point3);
        }
        else{
            printf("Wrong Answer\n");
            point03=0;
            printf("You have scored %d points.\n\n",point03);
        }

        printf("D. After losing a key player in the first game, which team went onto the semi-finals of Euro 2020?\n\n");
        printf("1. Denmark\n");
        printf("2. Portugal\n");
        printf("3. Lithuania\n");
        printf("4. Wales\n");

        printf("Enter your answer : ");
        scanf("%d",&ans4);

        if(ans4==1)
        {
            printf("Correct Answer\n");
            point4=5;
            printf("You have scored %d points\n\n", point4);
        }
        else{
            printf("Wrong Answer\n");
            point04=0;
            printf("You have scored %d points.\n\n",point04);
        }

        printf("E.  Which footballer holds the record for the highest number of assists in the Premier League?\n\n");
        printf("1. Cesc Fabregas\n");
        printf("2. Ryan Giggs\n");
        printf("3. Frank Lampard\n");
        printf("4. Paul scholes\n");

        printf("Enter your answer : ");
        scanf("%d",&ans5);

        if(ans5==2)
        {
            printf("Correct Answer\n");
            point5=5;
            printf("You have scored %d points\n\n", point5);
        }
        else{
            printf("Wrong Answer\n");
            point05=0;
            printf("You have scored %d points.\n\n",point05);
        }

    }
    


}