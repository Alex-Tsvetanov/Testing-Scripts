#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int totalTime=0;
    int numberStudents,maxDownloads,TimeDownload,WatchTime;
    scanf("%d%d%d%d",&numberStudents,&maxDownloads,&TimeDownload,&WatchTime);
    int films[numberStudents];
    int mfilms[1000000];
    int wfilms[numberStudents];
    int i;
    for(i=0;i<numberStudents;i++)
    {
        scanf("%d",&films[i]);
    }
    int student;
    for(student = 0;student<maxDownloads;student++)
    {
        wfilms[student]=films[student];
        mfilms[student]=NULL;
        totalTime += TimeDownload +WatchTime;
    }
    bool is_found;
    int currCicle=maxDownloads;
    while(student<numberStudents)
    {
        is_found = true;
        for(int j=0;j<wfilms;j++)
        {
            if(films[student]==wfilms[j])
            {
                is_found=false;
                student++;
                break;
            }
        }
        if(is_found==false)
        {
            currCicle--;
            student++;
            if(currCicle==0)
            {
                totalTime += maxDownloads + WatchTime;
                continue;
            }
            wfilms[student]=films[student];
            mfilms[student]=NULL;
        }
        totalTime += maxDownloads + WatchTime;
    }

    return 0;
}
