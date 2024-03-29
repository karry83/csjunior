#include<iostream>
#include <cstdio> 
#include<cmath>
#include<limits.h>
#include <stdlib.h>
#include <cstring>

using namespace std;
struct node{
	int yushu;
	int score;
	node * next;
};
struct hash_loc{
	int beishu;
	int yushu;
}; 
node * htable[100000000]={NULL};
char default_ch='0'; 
static int max_name_length=10; 
static int hash_base=100000000; 
static int students_count=900;
static int not_found = -1;
char  test_name[10];
/*
hash char[] name,max length 6
*/
char ch_v[1000];
void init_ch_v(){
	int i=1;
	for(char ch='A';ch<='Z';ch++){
		ch_v[ch]=i;
		i++;
	}
	ch_v[default_ch]=i;
}
hash_loc * hash(char name[]){
	//[0,4]->beishu ,[5,9]->yushu
	int name_len=strlen(name);
	int beishu_end=5;
	
	for(int i=0;i<name_len;i++){
		if(name[i]>='a' && name[i]<='z') {
			name[i]=name[i]-32;//to upper case
		}else if(name[i]>='A' && name[i]<='Z'){
			
		}else{
			name[i]=default_ch;
		}
	}
	int i=0;
	int yushu=1,beishu=1;
	//from 0 to 5, key of hash table
	for(int i=0;i<beishu_end;i++){
		if(i>=name_len){
			beishu=beishu*ch_v[default_ch];
		}else{
			beishu=beishu*ch_v[name[i]];
		}
	}
	//from 5 to 10 key of the index
	for(int i=beishu_end;i<10;i++){
		if(i>=name_len){
			yushu=yushu*ch_v[default_ch];
		}else{
			yushu=yushu*ch_v[name[i]];
		}
	}
	hash_loc * l= new hash_loc();
	l->beishu=beishu;
	l->yushu=yushu;  
	return l;
}
void put_score(char name[], int score){
	hash_loc * l = hash(name);
	if(htable[l->beishu]!=NULL){
		node * n = htable[l->beishu];
		bool find = false;
		if(n->yushu==l->yushu){//key.beishu.yushu matched already
			n->score=score;//update score by key.beishu.yushu	
			return;
		}
		while(n->next!=NULL){//iterate unitil found or reach end
			n = n->next; 
			if(n->yushu==l->yushu){//key.beishu.yushu matched already
				n->score=score;//update score by key.beishu.yushu
				find = true;
				break;	
			}
		}
		if(!find){//not found in the list of key.beishu,create a new node at the end of list
			node * n2 = new node();
			n2->yushu = l->yushu;
			n2->score= score;
			n2->next=NULL; 
			n->next=n2;
		}
		
	}else{
		node * n = new node();
		n->yushu = l->yushu;
		n->score= score;
		n->next=NULL; 
		htable[l->beishu]=n;
	}
}
int get_score(char name[]){
	hash_loc * l = hash(name);
	node * n = htable[l->beishu];
	if(n==0){
		return not_found;
	}
	int yushu=l->yushu;
	if(yushu==n->yushu){
		return n->score;
	}
	while(n->next!=NULL){//iterate unitil found or reach end
			n = n->next; 
			if(n->yushu==l->yushu){//key.beishu.yushu matched already
				return n->score; 
			}
	}
	return not_found;
} 

/*void gen_test_data(char start_ch,int count){
	int current=0;
	//'yyyymmddmmss' 
	char student_name[count][10];
	for(char s=start_ch;s<='Z',current<count;s++)
		for( char s1='A';s1<='Z',current<count;s1++)
			for( char s2='A';s2<='Z',current<count;s2++)
				for( char s3='A';s3<='Z',current<count;s3++)
					for( char s4='A';s4<='Z',current<count;s4++)
						for( char s5='A';s5<='Z',current<count;s5++)
							for( char s6='A';s6<='Z',current<count;s6++){
								student_name[current][0]=s;
								student_name[current][1]=s1;
								student_name[current][2]=s2;
								student_name[current][3]=s3;
								student_name[current][4]=s4;
								student_name[current][5]=s5;
								student_name[current][6]=s6;
								student_name[current][7]='Y';
								student_name[current][8]='Y';
								student_name[current][9]='Y';
								current++;	
							}
	freopen("hashtable.out","w",stdout);
	for(int i=0;i<count;i++){
		printf("%s %d\n",student_name[i],rand()%100+1);
	}	
	fclose(stdout);						
	
}*/
int main(){
//	cout<<"int max"<<INT_MAX<<endl;
	init_ch_v();
	freopen("../test/hashtable.in","r",stdin);
	char name[students_count][10]={0};
	int score[students_count];
	for(int i=0;i<students_count;i++){
		cin>>name[i]>>score[i];
		put_score(name[i],score[i]);
	}
	char searchname[10]="Abernethy";
	freopen("CON", "r", stdin);
	cin>>searchname;
	printf("name:%s  score:%d\n",searchname,get_score(searchname));
//	char name[10];
//	cin>>name;
//	hash(name);
	
//	gen_test_data('m',100);
	
}
