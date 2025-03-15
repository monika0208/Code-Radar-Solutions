// Your code here...
void selectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(min>arr[j]){
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

