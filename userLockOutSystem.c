#include <stdio.h>
#include <stdlib.h>

UserLockOutSystem(){
	
	int i=1;
	char password[20];
	int captcha;

	do{		
	password:
			system("cls");
			printf(" %d ATTEMPT",i++);
			printf(" | PLEASE ENTER YOUR PASSWORD: ");
			scanf("%s",&password);
			if(i==4){
				
				system("cls");
				printf(" YOU ARE LOCKED FOR 5 SECOND DUE TO MULTIPLE PASSWORD ATTEMPT");
				sleep(5);
				
				captcha:
				system("cls");
				printf(" CAPTCHA");
				printf("\n PROVE YOU ARE A HUMAN!!");
				printf("\n %d+13: ",i);
				scanf("%d",&captcha);
				if(captcha!=17){
					
					printf("\n CAPTCHA WRONG!!!");
					sleep(1);
					goto captcha;
					
					
				}
				system("cls");
				printf("RESETTING ALL ATTEMPTS");
				sleep(2);
				i=1;
				goto password;
				
			}
			
			}while(strcmp(password,"admin123")!=0);
			
				
				system("cls");
				sleep(1);
				printf("PASSWORD CORRECT!!");
			// new fuction start
			
}





main(){
	
	UserLockOutSystem();
	
}
