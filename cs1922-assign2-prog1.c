#include<sys/time.h>
#include<stdio.h>
#define GAP(start, end) ((end.tv_usec-start.tv_usec)+(end.tv_sec-start.tv_sec)*1000000)
void main(){
    struct timeval start_time, end_time;
    /* START OF BLOCK */
    long int n, N, e, E, e_choose_i, E_e_choose_N_i, E_choose_N;
    float p_value = 0;
    int p,q,r;
    double result1;
    double result2;
    double result3;
    scanf("%ld",&n); //scanf takes less time than fscanf
    scanf("%ld",&N);
    scanf("%ld",&e);
    scanf("%ld",&E);
    long int i,t1,t2,t3,t4,t5,t6;
    gettimeofday(&start_time, NULL);// calling it after scanf will reduce too much time 
    for(i = n; i <= N; i++){
        //for binomial(e,i)
        t1=i;
        t2=e;
        t3=E-e;
        t4=N-i;
        result1 = 1.0;
        result2 = 1.0;
        if(t1> e/2)
            t1=e-t1;
        ++t2;
        for(int p=1;p<=t1;++p)
            result1 *= (double)(t2-p)/p;
        e_choose_i=(long int)result1;
        if(t4 > (E-e)/2)
            t4=(E-e)-t4;
        ++t3;
        for(int q=1;q<=t4;++q)
            result2 *= (double)(t3-q)/q;
        E_e_choose_N_i=(long int)result2;
    	p_value += e_choose_i * E_e_choose_N_i;
    	}       
    t5=E;
    t6=N;
    result3=1.0;
    if(t6 > E/2)
        t6=E-t6;
    ++t5;
    for(int r=1;r<=t6;++r)
        result3 *= (double)(t5-r)/r;    
    E_choose_N=(long int)result3; 
    p_value /= E_choose_N;    
    /* END OF BLOCK */
    gettimeofday(&end_time, NULL);
    printf("p-value = %f (%d microseconds)", p_value, (int) GAP(start_time, end_time));
}