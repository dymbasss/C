#include "header.h"


    //определяем сам список
	typedef struct list {
		//данные
		int data;
		//след узле
		struct list *next;
		//предыдущий
		struct list *prev;
	}List;

	List* lst_new(void);                           // создать первый узел
	List* lst_add(List *lst, int value);           // следующий узел
	List* lst_getNlst(List *lst, int n);           // возвращает указатель на n-й узел списка               
	void lst_printNlst(List *lst, int n);          // вывод n-й элемент списка
	void lst_delNlst(List *lst, int n);            // удалить n-й элемент списка
	void lst_free(List *lst);                      // удалить список
	void lst_print(List *lst);                     // вывести список
	void lst_sort(List *lst);                      // сортировка
  
	List* lst_new(void)                      
	{
		List *lst = (List*)malloc(sizeof(List));
		lst->data = 0;
		lst->prev = NULL;                           
		lst->next = NULL;                             
		return lst; 
	}
	
	List* lst_add(List *lst, int value)
	{
		List *first;
		List *temp = (List*)malloc(sizeof(List));
		first = lst->next;		    // сохранение указателя на след. узел
		lst->next = temp; 			// предыдущий узел указывает на создаваемый
		temp->data = value;         // сохранение поля данных добавляемого узла
		temp->next = first;			// созданный узел указывает на следующий узел
		temp->prev = lst;		    // созданный узел указывает на предыдущий узел
		if (first != NULL)          // для двусвязного линейного
		first->prev = temp;
	    return(temp);
	}

	List* lst_del(List *lst)
	{
		List *prev, *next;
		prev = lst->prev; 			// узел, предшествующий lst                   
		next = lst->next; 			// узел, следующий за lst
		//if (prev != NULL);		// для линейного, удалить для циклического
		prev->next = lst->next;     // переставляем указатель
		//if (next != NULL);        // для линейного, удалить для циклического
		next->prev = lst->prev;     // переставляем указатель
		free(lst);                  // освобождаем память удаляемого элемента
		return(prev);
	}

	List * getNlst(List *lst, int n) // возвращает указатель на n-й узел списка
	{
		int count = 0;
		while(count < n && lst)
		{
			lst = lst->next;
			count++;
		}
		
		return lst;
	}
	
	int main ()
	{
		List *lst = lst_new();
		getchar();	
	}
	
	void lst_free(List *lst)    // удалить список
	{   List *temp = lst;
		List *next = NULL;          
		while(temp)
		{
			next = temp->next;
			free(temp);
		    temp = next;
		}
		free(lst);
		lst = NULL;
	}

	void lst_printNlst(List *lst, int n) // вывод n-й элемент списка
	{
		List *elemN = getNlst(lst, n);
		if (elemN == NULL)
			{
				exit(1);
			}
		printf("%d ", elemN->data);
		
	}

	void lst_delNlst(List *lst, int n) // удалить n-й элемент списка || удалить узел
	{
		List *elemN = getNlst(lst, n);
		if (elemN == NULL)
			{
				exit(1);
			}
			lst_del(elemN);
			//free(elemN);
	}

	void lst_sort(List *lst)    // сортировка
    	{
    		List *temp, *new;
    		int t=0;
    		int flag=1;
    		while(flag==1)
    		{
        		temp=lst;
        		new=temp->next;
        		flag=0;
       		 	while(new)
        		{
           		 	if((temp->data)>(new->data))
           			 {
               		 		t=temp->data;
                			temp->data=new->data;
                			new->data=t;
                			flag=1;
           		 	 }
            		temp=temp->next;
            		new=new->next;
        		}
    		}
	}

	void lst_print(List *lst)   // вывод списка
	{
		List *first; /*first = lst;*/
		int c;                           
		for(first = lst->next; first != NULL; first = first->next)
			{
		printf("Узел: %d\n",first->data);                      
		if ((c = getchar()) == EOF)                                 // просмотр
		{break;}
			}	
	}
