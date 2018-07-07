

#define	MAXSIZE  100   /*此处的宏定义常量表示线性表可能达到的最大长度*/
struct people{
	long num;     //选手编号
    char name[20];  //选手姓名
    float grades[10];  //选手成绩
    float ave;       //平均成绩
    char jmname[20]; //节目名称
	char lei[20];    //节目类别
    int clas;  //班级 
	float sum;    
	float max;
	float min;
	 
};
struct referee{
	long rnum;     //裁判电话 
    char rname[20];  //裁判姓名
    char  sex[5];  //裁判性别 
	 
};
typedef  struct people ElemType;
typedef  struct referee ElemType2;

typedef  struct
{ 
	ElemType  elem[MAXSIZE];  /*线性表占用的数组空间*/
	ElemType2  elem2[MAXSIZE]; 
	int       last; 
	int       last2;   /*记录线性表中最后一个元素在数组elem[ ]中的位置（下标值），空表置为-1*/
	
}SeqList;

