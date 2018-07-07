
#include "common.h"
#include "seqlist.h"

int input(SeqList *L)
{
	int p,q,r;
	int i,j;
	printf("请输入选手的数量:");
	scanf("%d",&r);
	L->last = r-1;
	
	printf("请输入姓名，编号，节目名称，节目类别，班级，成绩:\n");
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
	printf("请输入裁判的数量:");
	scanf("%d",&r);
	L->last2 = r-1;
	printf("请输入姓名，电话，性别:\n");
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
		printf("数组数据为空，无数据可以排序");
	}
	else
	{
		int i,j,n;
		ElemType  temp;  /*定义中间值  方便数据换位*/
		n=L->last;
		for(i=0;i<n;i++)     /*冒泡排序*/
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
		printf("排序成功");
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
		printf("数组数据为空，无数据可以查询\n");
		return 0;
	}
	else
	{
		printf("请选择编号(1)查询或姓名(2)查询\n");
		scanf("%d",&s);
		if(s==1)
		 {
			printf("请输入查找编号\n");
		     scanf("%d",&n);
		        /*i为扫描计数器，初值为0，即从第一个元素开始比较*/
		 while ((i<=L.last)&&(L.elem[i].num!=n))		/*顺序扫描表，直到找到值为key的元素, 或扫描到表尾而没找到*/
			i++;
		 if(i<=L.last)
		 {
			printf("该元素在线性表中的位置为:%d\n",i+1);  /*若找到值为e的元素，则返回其序号*/	
	
	    
		   printf("姓名 ：%s ",L.elem[i].name);
		   printf("编号 ：%d ",L.elem[i].num);
		   for(j=0; j<=L.last2; j++)  
		   {
		    printf("选手的分数为 ：%f",L.elem[i].grades[j]);
	       }
		
		 }
		  
		 else 
			printf("在此线性表中没有该元素!\n");  /*若没找到，则返回空序号*/
		 }
	     else {
			printf("请输入查找姓名\n");
		 scanf("%s",name);
		        /*i为扫描计数器，初值为0，即从第一个元素开始比较*/
		  while((i<=L.last)&&(strcmp(L.elem[i].name,name)))


        /*顺序扫描表，直到找到值为key的元素, 或扫描到表尾而没找到*/
			 i++;
		 if(i<=L.last)
		 {
			printf("该元素在线性表中的位置为:%d\n",i+1);  /*若找到值为e的元素，则返回其序号*/	
		
		   printf("姓名 ：%s ",L.elem[i].name);
		   printf("编号 ：%d ",L.elem[i].num);
		   for(j=0; j<=L.last2; j++)  
		   {
		    printf("选手的分数为 ：%f",L.elem[i].grades[j]);
	       }
	     	
		 }
		  
		 else 
			printf("在此线性表中没有该元素!\n");  /*若没找到，则返回空序号*/
		 }



	 }


}

	
int check(SeqList *L)
{
	int p,q;
	    p=fun3(*L,q);
	    if(p == -1)
	        printf("在此线性表中没有该元素!\n");
    return 0;
}
	  



int output(SeqList *L)
{
	int i,j;
	   for(i=0; i<=L->last; i++)
	    {
		   printf("姓名 ：%s ",L->elem[i].name);
		   printf("编号 ：%d ",L->elem[i].num);
		   printf("节目名称 ：%s ",L->elem[i].jmname);
		   printf("节目类别 ：%s ",L->elem[i].lei);
		   printf("所在班级 ：%d \n",L->elem[i].clas);
		   printf("选手的分数为 :");
		   for(j=0; j<=L->last2; j++)  
		   {
		    printf("%.2f   ",L->elem[i].grades[j]);
	       }
		printf("\n总成绩：%.2f ",L->elem[i].sum);
		printf("平均成绩：%f 最高分：%f 最低分：%f\n ",L->elem[i].ave,L->elem[i].max,L->elem[i].min);
	    } 	
	

		return 0;
	}

int outputj(SeqList *L)
{
	int i;
	   for(i=0; i<=L->last2; i++)
	    {
		   printf("姓名 ：%s ",L->elem2[i].rname);
		   printf("电话 ：%d ",L->elem2[i].rnum);
		   printf("性别 ：%s ",L->elem2[i].sex);
	    } 	
		return 0;
}

int  Delete(SeqList* L)
{
	ElemType x;
	int i;
	int p,q;
	printf("请输入要删除选手的编号：\n");
    scanf("%d",&x.num);
	if(L->last<0)
	{
		printf("数组数据为空，禁止删除");
		return 0;
	}
	else{
	int j;
	if(q<1||q>L->last+1){
		printf("位序%d不存在元素\n",q);
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
		printf("数组数据为空，禁止插入");
		return 0;
	}
	else{

	printf("请输入选手信息:\n");
	printf("请输入姓名，编号，节目名称，节目类别，班级，成绩:\n");
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
	printf("请输入要插入的位置：\n");
	scanf("%d",&q);
	int j;
	if(L->last==MAXSIZE-1){
		printf("表满");
		return 0;
	}
	if(q<1||q>L->last+2){
		printf("位序不合法");
		return 0;
	}
	for(s=L->last;s>=q-1;s--)
	  L->elem[s+1]=L->elem[s];
	L->elem[q-1]=x;
	L->last++;
	return 1;
}
}

void save(SeqList *L)   /*保存文件*/
{
	FILE *fp;
	FILE *temp;
	int i,j;                                /*定义指针 打开文件  */
	fp=fopen("student-data.csv","a+");
	if(fp==NULL)
	{
		printf("open file error.\n");
		//return -1;
		exit(-1);
	}
	else//把数组中的数据逐个写入student.csv。   请输入姓名，编号，节目名称，节目类别，班级，成绩
	{
		for(i=0;i<=L->last;j++)
		{
			fprintf(fp,"%s %d %s %s %d\n",L->elem[j].name,L->elem[j].num,L->elem[j].jmname,L->elem[j].lei,L->elem[j].clas);
			for(j=0;j<=L->last2;j++)
			{
				fprintf(fp,"%.2f   ",L->elem[i].grades[j]);
			}
			
		}
		printf("保存成功！\n");

	}
	fclose(fp);		/*关闭文件*/

}




void menu()
{
	SeqList L;
	int i;
	while(1)
	{
		printf("---------------------------------------------\n");
		printf("-------------- 裁判打分系统---------------\n");
		printf("--------------1.输入选手信息-----------------\n");
		printf("--------------2.输入裁判信息-----------------\n");
		printf("--------------3.插入选手信息-----------------\n");
		printf("--------------4.删除选手信息-----------------\n");
		printf("--------------5.输出选手信息-----------------\n");
		printf("--------------6.查找选手信息-----------------\n");
		printf("--------------7 排序选手成绩-----------------\n");
		printf("--------------8.选手文件读取-----------------\n");
		printf("--------------9.选手文件保存-----------------\n");
		printf("------------------0.退出---------------------\n");
		printf("--------------10.输出裁判信息-----------------\n");

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



