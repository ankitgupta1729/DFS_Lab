#include<sys/time.h>
#include<stdio.h>
#define GAP(start, end) ((end.tv_usec-start.tv_usec)+(end.tv_sec-start.tv_sec)*1000000)
/*double binomial(long n, long k)
{
    double result = 1.0;
    if ( k > n/2 )
        k = n - k;
    ++n;
    for (int i = 1; i <= k; ++i)
        result *= (double)(n - i) / i;
    return result;
}*/
void main(){
    struct timeval start_time, end_time;
    /* START OF BLOCK */
    long int n, N, e, E, e_choose_i, E_e_choose_N_i, E_choose_N;
    float p_value = 0;
     //var1, var2, var3, var4; // Temporary variables
    int p,q,r;
    long int result1;
    long int result2;
    long int result3;
    scanf("%ld",&n);
    scanf("%ld",&N);
    scanf("%ld",&e);
    scanf("%ld",&E);
    long int i,t1,t2,t3,t4,t5,t6;
    gettimeofday(&start_time, NULL);
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
            result1 *= (t2-p)/p;
        e_choose_i=result1;
        //printf("%ld\n",e_choose_i);
        //for binomial(E-e,N-i)
        if(t4 > (E-e)/2)
            t4=(E-e)-t4;
        ++t3;
        for(int q=1;q<=t4;++q)
            result2 *= (t3-q)/q;
        E_e_choose_N_i=result2;
        //printf("%ld\n",E_e_choose_N_i);
    	p_value += e_choose_i * E_e_choose_N_i;
        //printf("%f\n",p_value);
    	}   
        //for binomial(E,N)
    //printf("binomial E,N\n");    
    t5=E;
    t6=N;
    result3=1.0;
    if(t6 > E/2)
        t6=E-t6;
    //printf("%ld\n",t6);
    ++t5;
    //printf("%ld\n",t5);
    for(int r=1;r<=t6;++r)
            result3 *= (t5-r)/r;
    //printf("%lf\n",result3);    
    E_choose_N=result3; 
    p_value /= E_choose_N;
    //printf("%ld\n",E_choose_N);    
    /* END OF BLOCK */
    gettimeofday(&end_time, NULL);
    printf("p-value = %f (%d microseconds)", p_value, (int) GAP(start_time, end_time));
}