#include <stdio.h>
#include <windows.h>
/*@author Pias-Paul
   North South University
   141 Batch
*/
main()
{
     char g;
     printf("Press Keys to make Your own tune :) ");
         while(g!='m'){

    g=getch();
    if(g== '1')PlaySound(("C:\\Windows\\Media\\Cma d.wav"),NULL, SND_ASYNC);
    else if(g== '2')PlaySound(("C:\\Windows\\Media\\Cma up.wav"),NULL, SND_ASYNC);
    else if(g== '3')PlaySound(("C:\\Windows\\Media\\Am d.wav"),NULL, SND_ASYNC);
    else if(g== '4')PlaySound(("C:\\Windows\\Media\\Am up.wav"),NULL, SND_ASYNC);
    else if(g== '5')PlaySound(("C:\\Windows\\Media\\Dm d.wav"),NULL, SND_ASYNC);
    else if(g== '6')PlaySound(("C:\\Windows\\Media\\Dm up.wav"),NULL, SND_ASYNC);
    else if(g== '7')PlaySound(("C:\\Windows\\Media\\Gmaj d.wav"),NULL, SND_ASYNC);
    else if(g== '8')PlaySound(("C:\\Windows\\Media\\G maj up.wav"),NULL, SND_ASYNC);
    else if(g== '9')PlaySound(("C:\\Windows\\Media\\F maj d.wav"),NULL, SND_ASYNC);
    else if(g== '+')PlaySound(("C:\\Windows\\Media\\F maj up.wav"),NULL, SND_ASYNC);
    else if(g== '*')PlaySound(("C:\\Windows\\Media\\Em d.wav"),NULL, SND_ASYNC);
    else if(g== '/')PlaySound(("C:\\Windows\\Media\\Em up.wav"),NULL, SND_ASYNC);
    else if(g== '0')PlaySound(("C:\\Windows\\Media\\B maj d.wav"),NULL, SND_ASYNC);
    else if(g== '.')PlaySound(("C:\\Windows\\Media\\B maj up.wav"),NULL, SND_ASYNC);
    else if(g== '[')PlaySound(("C:\\Windows\\Media\\Bmm d.wav"),NULL, SND_ASYNC);
    else if(g== ']')PlaySound(("C:\\Windows\\Media\\Bmm up.wav"),NULL, SND_ASYNC);
    else if(g== 'p')PlaySound(("C:\\Windows\\Media\\Cmm d.wav"),NULL, SND_ASYNC);
    else if(g== 'o')PlaySound(("C:\\Windows\\Media\\Cm up.wav"),NULL, SND_ASYNC);
    else if(g== 'i')PlaySound(("C:\\Windows\\Media\\E maj d.wav"),NULL, SND_ASYNC);
    else if(g== 'u')PlaySound(("C:\\Windows\\Media\\E maj up.wav"),NULL, SND_ASYNC);
    else if(g== 'y')PlaySound(("C:\\Windows\\Media\\G m d.wav"),NULL, SND_ASYNC);
    else if(g== 't')PlaySound(("C:\\Windows\\Media\\Gm up.wav"),NULL, SND_ASYNC);
    else if(g== 'r')PlaySound(("C:\\Windows\\Media\\Amaj d.wav"),NULL, SND_ASYNC);
    else if(g== 'e')PlaySound(("C:\\Windows\\Media\\A maj up.wav"),NULL, SND_ASYNC);
    else if(g=='w')PlaySound(("C:\\Windows\\Media\\Fmm d.wav"),NULL, SND_ASYNC);
    else if(g== 'q')PlaySound(("C:\\Windows\\Media\\Fm up.wav"),NULL, SND_ASYNC);
    else if(g== 'a')PlaySound(("C:\\Windows\\Media\\D maj d.wav"),NULL, SND_ASYNC);
    else if(g== 's')PlaySound(("C:\\Windows\\Media\\D maj up.wav"),NULL, SND_ASYNC);


    }
}

