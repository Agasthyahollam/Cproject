#include<stdio.h>

#include<string.h>

void main()

{

	char name[25], pwd[25], ver[25];

	int i, a, digi , up , low , schar ;

	printf("Enter your Name: ");

	gets(name);
renter:
	digi = 0; 
	up = 0; 
	low = 0; 
	schar = 0;

 printf("Hello %s, Enter your password:\n", name);

	gets(pwd);

	a = strlen(pwd);

	if (a < 5)

	{

		printf("Error: Password should contain contain minimum 5 characters ");

	}

	else if (a > 12)

	{

		printf("Error: Password shouldn't exceed 12 characters ");

	}

	else

	{

		for (i = 0; pwd[i] != NULL; i++)

		{

			if (pwd[i] >= 'A' && pwd[i] <= 'Z')

				up++;

			if (pwd[i] >= 'a' && pwd[i] <= 'z')

				low++;

			if (pwd[i] >= '0' && pwd[i] <= '9')

				digi++;

			if (pwd[i] == '@' || pwd[i] == '#' || pwd[i] == '$')

				schar++;

		}

	}

	if (up == 0)
	{
		printf("There must be at least one Uppercase\n"); 


			goto renter; 
	}

	if (low == 0)
	{
		printf("There must be at least one Lowercase\n"); 
		goto renter; 
		
	}
     if (digi == 0)
	{
		printf("There must be at least one Digit\n"); 
		goto renter; 
	 }
	 if (schar == 0)
	{ 
		printf("There must be at least one Special Character\n"); 
		goto renter; 
	}
	else
    {  renter1:
		printf("Confirm your Password\n");

		gets(ver);

		if (strcmp(pwd, ver) == 0) 
		{

			printf("Welcome %s, your is Password Verified", name);
		}
		else 
		{

			printf("Password did not match\n");
			goto renter1;
		}
	}

	getch(); }
