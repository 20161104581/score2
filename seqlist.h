

#define	MAXSIZE  100   /*�˴��ĺ궨�峣����ʾ���Ա���ܴﵽ����󳤶�*/
struct people{
	long num;     //ѡ�ֱ��
    char name[20];  //ѡ������
    float grades[10];  //ѡ�ֳɼ�
    float ave;       //ƽ���ɼ�
    char jmname[20]; //��Ŀ����
	char lei[20];    //��Ŀ���
    int clas;  //�༶ 
	float sum;    
	float max;
	float min;
	 
};
struct referee{
	long rnum;     //���е绰 
    char rname[20];  //��������
    char  sex[5];  //�����Ա� 
	 
};
typedef  struct people ElemType;
typedef  struct referee ElemType2;

typedef  struct
{ 
	ElemType  elem[MAXSIZE];  /*���Ա�ռ�õ�����ռ�*/
	ElemType2  elem2[MAXSIZE]; 
	int       last; 
	int       last2;   /*��¼���Ա������һ��Ԫ��������elem[ ]�е�λ�ã��±�ֵ�����ձ���Ϊ-1*/
	
}SeqList;

