// github.com/piotrchaber

bool isSorted(int index, int arr[]) {
    for(int i = 0; i < index; i++) {
        if(arr[i] > arr[i + 1]) return false;
    }
    return true;
}

void insertionSort(int N, int arr[]) {
    int i,j;
    int value;
    for(i=1;i<N;i++)
    {
        value=arr[i];
        j=i-1;
        while(j>=0 && value<arr[j])
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=value;
        if(!isSorted(i, arr)) {
            std::cout << "Sort fail at index " << i - 1 << std::endl;
            exit(0);
        }
    }
    for(j=0;j<N;j++)
    {
        printf("%d",arr[j]);
        printf(" ");
    }
}