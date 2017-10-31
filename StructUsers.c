
#include "header.h"

	#define MAX_SIZE 10

	typedef struct User
	{
		char *login;
		char *password;
		int id;
	}User;

	void Allinf(User *user)
	{
		printf("{id: %d, Пользователь: \"%s\", Пароль: \"%s\"}\n",
		user->id+1, user->login, user->password);
	
	}

	void freeArray(User** users, unsigned size)
	{
		unsigned i;
		for (i = 0; i < size; i++)
		{
			free((*users)[i].login);
			free((*users)[i].password);
		}
		free(*users);
		
	
	}

	int main()
	{
		User *users = NULL;
		unsigned size;
		char buff[128];
		unsigned i;

		printf("Введите число пользователей: ");
		scanf("%d",&size);

		size = size <= MAX_SIZE ? size : MAX_SIZE;
		users = (User*) malloc(size * sizeof(User));

		for (i = 0; i < size; i++)
		{
			printf("Пользователь №%d:", i+1);
			scanf("%127s", buff);
			
			users[i].id = i;
			users[i].login = (char*)malloc(strlen(buff)+1);
			
			strcpy(users[i].login, buff);
			printf("Пароль: ");
			scanf("%127s",buff);
			
			users[i].password = (char*)malloc(strlen(buff)+1);
			strcpy(users[i].password, buff);
		}

		for(i = 0; i < size; i++)
		Allinf(&users[i]);

		freeArray(&users, size);
		getchar();
	
	}
		 


