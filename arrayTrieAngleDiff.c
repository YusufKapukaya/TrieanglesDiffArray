#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>






void arrayTriangle()
{
    int c,i,k,l,m,n,t=0,p=0,ea=0,y,FirEdge,SecEdge,ThiEdge,isWrote=0;;
    printf("How many Number do you need? \n");
    scanf("%d",&i);
    ea=9*i;
    int a[i],tra[ea];
    srand(time(NULL));
    for(c=0; c<i; c++)
    {
        a[c]=rand()%5+1;
        printf(" %d",a[c]);

    }

    printf("\n--------------------\n");


    for(c=0; c<i-2; c++)
    {
        FirEdge=a[c];

        for(t=c+1; t<i-1; t++)
        {
            SecEdge=a[t];
            l=FirEdge+SecEdge;

            for(k=t+1; k<i; k++)
            {
                ThiEdge=a[k];
                m=SecEdge+ThiEdge;
                n=FirEdge+ThiEdge;
                if(l>ThiEdge && m>FirEdge && n>SecEdge)
                {
                    if(p>2)
                    {
                        isWrote=1;
                        for(y=0; y<p; y+=3 )
                        {
                            if(tra[y]==FirEdge && tra[y+1]==SecEdge && tra[y+2]==ThiEdge)
                            {
                                isWrote=0;
                            }else if(tra[y]==FirEdge && tra[y+1]==ThiEdge && tra[y+2]==SecEdge)
                            {
                                isWrote=0;
                            } else if(tra[y]==SecEdge && tra[y+1]==FirEdge && tra[y+2]==ThiEdge)
                            {
                                isWrote=0;
                            }else if(tra[y]==SecEdge && tra[y+1]==ThiEdge && tra[y+2]==FirEdge)
                            {
                                isWrote=0;
                            }else if (tra[y]==ThiEdge && tra[y+1]==SecEdge && tra[y+2]==FirEdge)
                            {
                                isWrote=0;
                            }else if (tra[y]==ThiEdge && tra[y+1]==FirEdge && tra[y+2]==SecEdge)
                            {
                                isWrote=0;
                            }


                        }
                        if(isWrote)
                        {
                            tra[p]=FirEdge;
                            tra[p+1]=SecEdge;
                            tra[p+2]=ThiEdge;
                            p+=3;
                        }
                    }
                    else
                    {
                        tra[p]=FirEdge;
                        tra[p+1]=SecEdge;
                        tra[p+2]=ThiEdge;
                        p+=3;
                    }
                }
            }
        }
    }
    for(c=1; c<=p; c++)
    {
        printf(" %d ",tra[c-1]);
        if(c%3==0)
        {
            printf("\n");
        }
    }
}


int main()
{
    arrayTriangle();
    return 0;
}
