
#include "common.h"
#include "seqlist.h"

int input(SeqList *L)
{
	int p,q,r;
	int i,j;
	printf("������ѡ�ֵ�����:");
	scanf("%d",&r);
	L->last = r-1;
	
	printf("��������������ţ���Ŀ���ƣ���Ŀ��𣬰༶���ɼ�:\n");
	for(i=0; i<=L->last; i++)
	{
		L->elem[i].max=0;
		L->elem[i].min=100;
		L->elem[i].sum=0;
		scanf("%s",L->elem[i].name);
		scanf("%d",&L->elem[i].num);
		scanf("%s",L->elem[i].jmname);
		scanf("%s",L->elem[i].lei);
		scanf("%d",&L->elem[i].clas);
		for(j=0; j<=L->last2; j++)
		{
		 scanf("%f",&L->elem[i].grades[j]);
		 L->elem[i].sum=L->elem[i].grades[j]+L->elem[i].sum;
		 if(L->elem[i].max<L->elem[i].grades[j])
		 	L->elem[i].max=L->elem[i].grades[j];
		if(L->elem[i].min>L->elem[i].grades[j])
		 	L->elem[i].min=L->elem[i].grades[j];
	    }
	    L->elem[i].ave=(L->elem[i].sum-L->elem[i].max-L->elem[i].min)/(L->last2-1);
	    
	    
	}


	return 0;
}

int inputjud(SeqList *L)
{
	int p,q,r;
	int i,j;
	printf("��������е�����:");
	scanf("%d",&r);
	L->last2 = r-1;
	printf("�������������绰���Ա�:\n");
	for(i=0; i<=L->last2; i++)
	{
	    scanf("%s",L->elem2[i].rname);
		scanf("%d",&L->elem2[i].rnum);
		scanf("%s",L->elem2[i].sex);
	}
	return 0;
}

void fun4(SeqList *L)
{
	if(L->last<0)
	{
		printf("��������Ϊ�գ������ݿ�������");
	}
	else
	{
		int i,j,n;
		ElemType  temp;  /*�����м�ֵ  �������ݻ�λ*/
		n=L->last;
		for(i=0;i<n;i++)     /*ð������*/
		{
			for(j=0;j<n-i;j++)
		    {
		  		if(L->elem[j].sum<L->elem[j+1].sum)
		  		{
			  		temp=L->elem[j];
			  		L->elem[j]=L->elem[j+1];
			  		L->elem[j+1]=temp;
		  		}
		    }
		}
		printf("����ɹ�");
	}

}

int fun3(SeqList L,int s)
{
	int i=0;
    int j;
	int n;
	char name[20];
	if(L.last<0)
	{
		printf("��������Ϊ�գ������ݿ��Բ�ѯ\n");
		return 0;
	}
	else
	{
		printf("��ѡ����(1)��ѯ������(2)��ѯ\n");
		scanf("%d",&s);
		if(s==1)
		 {
			printf("��������ұ��\n");
		     scanf("%d",&n);
		        /*iΪɨ�����������ֵΪ0�����ӵ�һ��Ԫ�ؿ�ʼ�Ƚ�*/
		 while ((i<=L.last)&&(L.elem[i].num!=n))		/*˳��ɨ���ֱ���ҵ�ֵΪkey��Ԫ��, ��ɨ�赽��β��û�ҵ�*/
			i++;
		 if(i<=L.last)
		 {
			printf("��Ԫ�������Ա��е�λ��Ϊ:%d\n",i+1);  /*���ҵ�ֵΪe��Ԫ�أ��򷵻������*/	
	
	    
		   printf("���� ��%s ",L.elem[i].name);
		   printf("��� ��%d ",L.elem[i].num);
		   for(j=0; j<=L.last2; j++)  
		   {
		    printf("ѡ�ֵķ���Ϊ ��%f",L.elem[i].grades[j]);
	       }
		
		 }
		  
		 else 
			printf("�ڴ����Ա���û�и�Ԫ��!\n");  /*��û�ҵ����򷵻ؿ����*/
		 }
	     else {
			printf("�������������\n");
		 scanf("%s",name);
		        /*iΪɨ�����������ֵΪ0�����ӵ�һ��Ԫ�ؿ�ʼ�Ƚ�*/
		  while((i<=L.last)&&(strcmp(L.elem[i].name,name)))


        /*˳��ɨ���ֱ���ҵ�ֵΪkey��Ԫ��, ��ɨ�赽��β��û�ҵ�*/
			 i++;
		 if(i<=L.last)
		 {
			printf("��Ԫ�������Ա��е�λ��Ϊ:%d\n",i+1);  /*���ҵ�ֵΪe��Ԫ�أ��򷵻������*/	
		
		   printf("���� ��%s ",L.elem[i].name);
		   printf("��� ��%d ",L.elem[i].num);
		   for(j=0; j<=L.last2; j++)  
		   {
		    printf("ѡ�ֵķ���Ϊ ��%f",L.elem[i].grades[j]);
	       }
	     	
		 }
		  
		 else 
			printf("�ڴ����Ա���û�и�Ԫ��!\n");  /*��û�ҵ����򷵻ؿ����*/
		 }



	 }


}

	
int check(SeqList *L)
{
	int p,q;
	    p=fun3(*L,q);
	    if(p == -1)
	        printf("�ڴ����Ա���û�и�Ԫ��!\n");
    return 0;
}
	  



int output(SeqList *L)
{
	int i,j;
	   for(i=0; i<=L->last; i++)
	    {
		   printf("���� ��%s ",L->elem[i].name);
		   printf("��� ��%d ",L->elem[i].num);
		   printf("��Ŀ���� ��%s ",L->elem[i].jmname);
		   printf("��Ŀ��� ��%s ",L->elem[i].lei);
		   printf("���ڰ༶ ��%d \n",L->elem[i].clas);
		   printf("ѡ�ֵķ���Ϊ :");
		   for(j=0; j<=L->last2; j++)  
		   {
		    printf("%.2f   ",L->elem[i].grades[j]);
	       }
		printf("\n�ܳɼ���%.2f ",L->elem[i].sum);
		printf("ƽ���ɼ���%f ��߷֣�%f ��ͷ֣�%f\n ",L->elem[i].ave,L->elem[i].max,L->elem[i].min);
	    } 	
	

		return 0;
	}

int outputj(SeqList *L)
{
	int i;
	   for(i=0; i<=L->last2; i++)
	    {
		   printf("���� ��%s ",L->elem2[i].rname);
		   printf("�绰 ��%d ",L->elem2[i].rnum);
		   printf("�Ա� ��%s ",L->elem2[i].sex);
	    } 	
		return 0;
}

int  Delete(SeqList* L)
{
	ElemType x;
	int i;
	int p,q;
	printf("������Ҫɾ��ѡ�ֵı�ţ�\n");
    scanf("%d",&x.num);
	if(L->last<0)
	{
		printf("��������Ϊ�գ���ֹɾ��");
		return 0;
	}
	else{
	int j;
	if(q<1||q>L->last+1){
		printf("λ��%d������Ԫ��\n",q);
		return FALSE;
	}
	for(j=q;j<=L->last;j++)
	    L->elem[j-1]=L->elem[j];
	L->last--;
	return TRUE;
}
}



int Insert(SeqList *L)
{
	ElemType x;
	int i,j,s;
	int q,p;

	if(L->last<0)
	{
		printf("��������Ϊ�գ���ֹ����");
		return 0;
	}
	else{

	printf("������ѡ����Ϣ:\n");
	printf("��������������ţ���Ŀ���ƣ���Ŀ��𣬰༶���ɼ�:\n");
	for(i=0; i<=L->last; i++)
	{
		scanf("%s",x.name);
		scanf("%d",&x.num);
		scanf("%s",x.jmname);
		scanf("%s",x.lei);
		scanf("%d",&x.clas);
		for(j=0; j<=L->last2; j++)
		{
		  scanf("%f",&x.grades[j]);
	      x.sum=x.grades[j]+x.sum;
		 if(x.max<x.grades[j])
		 	x.max=x.grades[j];
		 if(x.min>x.grades[j])
		 x.min=x.grades[j];
	    }
	    x.ave=(x.sum-x.max-x.min)/(L->last2-1);
	    
	    
	}
	printf("������Ҫ�����λ�ã�\n");
	scanf("%d",&q);
	int j;
	if(L->last==MAXSIZE-1){
		printf("����");
		return 0;
	}
	if(q<1||q>L->last+2){
		printf("λ�򲻺Ϸ�");
		return 0;
	}
	for(s=L->last;s>=q-1;s--)
	  L->elem[s+1]=L->elem[s];
	L->elem[q-1]=x;
	L->last++;
	return 1;
}
}

void save(SeqList *L)   /*�����ļ�*/
{
	FILE *fp;
	FILE *temp;
	int i,j;                                /*����ָ�� ���ļ�  */
	fp=fopen("student-data.csv","a+");
	if(fp==NULL)
	{
		printf("open file error.\n");
		//return -1;
		exit(-1);
	}
	else//�������е��������д��student.csv��   ��������������ţ���Ŀ���ƣ���Ŀ��𣬰༶���ɼ�
	{
		for(i=0;i<=L->last;j++)
		{
			fprintf(fp,"%s %d %s %s %d\n",L->elem[j].name,L->elem[j].num,L->elem[j].jmname,L->elem[j].lei,L->elem[j].clas);
			for(j=0;j<=L->last2;j++)
			{
				fprintf(fp,"%.2f   ",L->elem[i].grades[j]);
			}
			
		}
		printf("����ɹ���\n");

	}
	fclose(fp);		/*�ر��ļ�*/

}




void menu()
{
	SeqList L;
	int i;
	while(1)
	{
		printf("---------------------------------------------\n");
		printf("-------------- ���д��ϵͳ---------------\n");
		printf("--------------1.����ѡ����Ϣ-----------------\n");
		printf("--------------2.���������Ϣ-----------------\n");
		printf("--------------3.����ѡ����Ϣ-----------------\n");
		printf("--------------4.ɾ��ѡ����Ϣ-----------------\n");
		printf("--------------5.���ѡ����Ϣ-----------------\n");
		printf("--------------6.����ѡ����Ϣ-----------------\n");
		printf("--------------7 ����ѡ�ֳɼ�-----------------\n");
		printf("--------------8.ѡ���ļ���ȡ-----------------\n");
		printf("--------------9.ѡ���ļ�����-----------------\n");
		printf("------------------0.�˳�---------------------\n");
		printf("--------------10.���������Ϣ-----------------\n");

		printf("---------------------------------------------\n");

		scanf("%d",&i);
		switch(i)
		{
			case 1:  input(&L); break;
			case 2:  inputjud(&L);break;
			case 3:  Insert(&L);break;
			case 4:  Delete(&L);break;
			case 5:  output(&L);break;
			case 6:  check(&L);break;
			case 7:  fun4(&L);break;
		//	case 8:  read(&L);break;
		    case 9:  save(&L);break;
		    case 10: outputj(&L);break;

			case 0:  return;

		}
	}
}

int main()
{
	menu();
	return 0;
}



