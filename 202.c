#include<stdio.h>
int up(int a,int b,int c)//化為假分數
{
    if(a<0)
        return (a*c-b);
    else
        return (a*c+b);
}
int abs(int a)
{
    if(a<0){return -a;}
    else{return a;}
}
int gcd(int a,int b)
{
	while(b!=0)
	{
		int r=a%b;
		a=b;
		b=r;
	}		
	return a;
}
int main()
{
    int a,b,c,d,e,f,g,fracup,fracdown;
    scanf("%d\n%d\n%d\n%d\n%d\n%d\n%d",&a,&b,&c,&d,&e,&f,&g);
    b = up(a,b,c);
    f = up(e,f,g);
    if(d==0)
    {
        if(c!=g)
        {
            b = b*g;//通分
            //printf("b:%d\n",b);
            f = f*c;
            //printf("f:%d\n",f);
            c = c*g;
            g = c;
            //printf("c:%d\ng:%d\n",c,g);
        }
        fracup = b+f;
        fracdown = c;
        //printf("fracdown:%d\n",fracdown);
    }
    else if(d==1)
    {
        if(c!=g)
        {
            b = b*g;//通分
            //printf("b:%d\n",b);
            f = f*c;
            //printf("f:%d\n",f);
            c = c*g;
            g = c;
            //printf("c:%d\ng:%d\n",c,g);
        }
        fracup = b-f;
        fracdown = c;
    }
    else if(d==2)
    {
        fracup = b*f;
        fracdown = c*g;
    }
    else
    {
        fracup = b*g;
        fracdown = c*f;
    }
    //printf("fracup:%d\nfracdown:%d\nc:%d\ng:%d\nd:%d\n",fracup,fracdown,c,g,d);
    int x,y,z;
    x = fracup/fracdown;
    if(x>0)
    {
        //printf("HI\n");
        fracup = abs(fracup);
        fracdown = abs(fracdown);
    }
    if(fracup>=0)
    {
        y = fracup-x*fracdown;
        //printf("Y:%d\n",y);
    }
    else if(fracup<0)
    {
        y = -(fracup-x*fracdown);
        //printf("y:%d\n",y);
    }
    while (1)//化為最簡分數
    {
        if(gcd(fracdown,y)==1){break;}
        int temp = gcd(fracdown,y);
        y = y/temp;
        fracdown = fracdown/temp;
    }
    //printf("x:%d\ny:%d\nz:%d",x,y,fracdown);
    printf("%d\n%d\n%d",x,y,fracdown);
}