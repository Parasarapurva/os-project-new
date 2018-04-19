//Sudesh Sharma is a Linux expert who wants to have an online system where he can handle student queries. Since there can be multiple requests at any time he wishes to dedicate a fixed amount of time to every request so that everyone gets a fair share of his time. He will log into the system from 10am to 12am only.  He wants to have separate requests queues for students and faculty. Implement a strategy for the same. The summary at the end of the session should include the total time he spent on handling queries and average query time.//

#include<stdio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int noOfProcess, root, timeQuantum, totT=0, avgT;
    int studentArray[100];
    char sirName[20];
    time_t timer;
    char buffer[26];
    struct tm* tm_info;

    time(&timer);
    tm_info = localtime(&timer);

    strftime(buffer, 26, "%Y-%m-%d %H:%M:%S", tm_info);
    puts(buffer);
	
	if(tm_info->tm_hour >=00 && tm_info->tm_hour <=24 )
	{
		printf("The time you have logged in is ");
    	printf("\nAre you HR?Enter 1 if yes");
    	scanf("%d", &root);
    	if(root==1)
    	{
    		printf("\n*********Please Enter Your Name********* ");
    		scanf("%s", &sirName);
    	    printf("\nWelcome %s", sirName);
    	    printf("\nYour time is from 10 to 12 AM");
    	    printf("\n-------------------------------------------");
    	    printf("\nEnter no of students having queries:");
    	    scanf("%d",&noOfProcess);
    	    printf("\nEnter the time Quantum:");
    	    scanf("%d", &timeQuantum);
    	    for(int i=0; i<noOfProcess; i++)
    	    {
    	        studentArray[i] = i+1;
    	    }
    	    for(int i=120, j=0; i>0, j<=noOfProcess; i=i-timeQuantum, j++)
    	    {
    	        printf("\nThe doubt query handled %d", i);
    	        printf("\nthe student is:%d",studentArray[j]);
    	        totT = totT + timeQuantum;
    	        
    	    }
    	    avgT = (totT/noOfProcess);
    	    printf("----------------------------------------------------------------");
    	    printf("\nThe total Time handled by the person is : %d", totT);
    	    printf("\nThe average time Query is %d", avgT);
    	}
    	else
    	{
    	    printf("\nSorry this program is for only professionals");
    	    printf("\nTry again later");
    	}
   	}
	else
	{
		printf("\n************Server is not available do come between 10 and 12***********");
	}
}	
