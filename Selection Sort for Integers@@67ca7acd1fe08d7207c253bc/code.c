// Your code here...
void selectionSort(int arr[],int n){
    int min;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                min=arr[j];
                printf("%d ",min);
            }
        }
    }

}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
    printf("%d",arr[i]);
    }
}

