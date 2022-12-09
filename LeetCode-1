/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* canSeePersonsCount(int* a, int n, int* returnSize){
    int i,j,count=0,*s;
    s=(int*)malloc(n*sizeof(int));
    (*returnSize)++;
    for(i=(*returnSize);i<n;i++)
    {
        count=0;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[j-1]&&(j-i!=1))
            {
                continue;
            }
            if(a[i]>a[j])
            count++;
            else
            {
                count++;
            break;
            }
        }
        s[i]=count;
        printf("%d ",s[i]);
    }
    return s; 
 
}
