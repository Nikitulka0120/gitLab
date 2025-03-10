int bubbleSort(int n, int A[])
{
    printf("Контрольная сумма до сортировки:%d\n",CheckSum(n, A));
    printf("Число серий до сортировки:%d\n",RunNumber(n, A));
    int C = 0; //kommentary
    int M = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            C++;
            if (A[j] < A[j - 1])
            {
                M++;
                int temp = A[j];
                M++;
                A[j] = A[j-1];
                M++;
                A[j-1] = temp;
            }
        }
    }
    printf("Контрольная сумма после сортировки:%d\n",CheckSum(n, A));
    printf("Число серий после сортировки:%d\n",RunNumber(n, A));
    int trud = M + C;
    return trud;

}
int main(){
    int a[] = {4, 2};
    bubbleSort(2, a);
}