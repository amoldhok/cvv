#include <stdio.h>
#include <string.h>

struct player 
{
    int id;
    char name[90];
    int run;
    int age;
};

int main() {
    struct player arr[5];
    
    for (int i = 0; i < 5; i++)
	 {
        printf("Enter details for player id name run age\n");
        scanf("%d%s%d%d ",&arr[i].id,arr[i].name,&arr[i].run,&arr[i].age);
    }
    
    printf("Players whose age is between 25 to 35:\n");
    for (int i = 0; i < 5; i++)
	 {
        if (arr[i].age >= 25 && arr[i].age <= 35)
		 {
           printf("%d\t%s\t%d\t%d\n",arr[i].id,arr[i].name,arr[i].run,arr[i].age);
        }
    }
    
    return 0;
}



