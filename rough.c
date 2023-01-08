#include<stdio.h>
#include<stdlib.h>
void display(int a[],int n);
void bubble_sort(int a[],int n);
void selection_sort(int a[],int n);
void insertion_sort(int a[],int n);
void radix_sort(int a[],int n);
void counting_sort(int a[],int n);
int main(){
 int n,choice,i,k=0;
 char ch[20];
 printf("Enter no. of elements u want to sort : ");
 scanf("%d",&n);
 int arr[n];
 for(i=0;i<n;i++)
 {
 printf("Enter %d Element : ",i+1);
scanf("%d",&arr[i]);
 }
 printf("Please select any option Given Below for Sorting : \n");
while(1) {
    printf("\n1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\n4. Radix sort.\n5. Counting sort.\n6.Display Array");
 printf("\nEnter your Choice : ");
 scanf("%d",&choice);
 switch(choice){
 case 1:
 bubble_sort(arr,n);
 break;
 case 2:
 selection_sort(arr,n);
 break;
 case 3:
 insertion_sort(arr,n);
 break;
 case 4:
 radix_sort(arr,n);
 break;
 case 5:
 counting_sort(arr,n);
 break;
 case 6:
 display(arr,n);
 break;
 default:
 printf("\nPlease Select only 1-6 option ----\n");
 }
 break;
}
return 0;
}
void display(int arr[],int n)
{
 for(int i=0;i<n;i++)
 {
 printf(" %d ",arr[i]);
 }
}
void bubble_sort(int arr[],int n){
 int i,j,temp;
 for(i=0;i<n;i++) {
 for(j=0;j<n-i-1;j++) {
 if(arr[j]>arr[j+1]) {
 temp=arr[j];
 arr[j]=arr[j+1];
 arr[j+1]=temp;
 }
 }
 }
printf("After Bubble sort Elements are : ");
display(arr,n);
}
void selection_sort(int arr[],int n)
{
 int i,j,temp;
 for(i=0;i<n-1;i++)
 {
 for(j=i+1;j<n;j++)
 {
 if(arr[i]>arr[j])
 {
 temp=arr[i];
 arr[i]=arr[j];
 arr[j]=temp;
 }
 }
 }
 printf("After Selection sort Elements are : ");
display(arr,n);
}
void insertion_sort(int arr[],int n)
{
 int i,j,min;
 for(i=1;i<n;i++)
 {
 min=arr[i];
 j=i-1;
 while(min<arr[j] && j>=0)
 {
 arr[j+1]=arr[j];
 j=j-1;
 }
 arr[j+1]=min;
 }
printf("After Insertion sort Elements are : ");
display(arr,n);
}
int get_max (int a[], int n){
 int max = a[0];
 for (int i = 1; i < n; i++)
 if (a[i] > max)
 max = a[i];
 return max;
}
void radix_sort (int arr[], int n){
 int bucket[10][10], bucket_cnt[10];
 int i, j, k, r, NOP = 0, divisor = 1, lar, pass;
 lar = get_max (arr, n);
 while (lar > 0){
 NOP++;
 lar /= 10;
 }
 for (pass = 0; pass < NOP; pass++){
 for (i = 0; i < 10; i++){
 bucket_cnt[i] = 0;
 }
 for (i = 0; i < n; i++){
 r = (arr[i] / divisor) % 10;
 bucket[r][bucket_cnt[r]] = arr[i];
 bucket_cnt[r] += 1;
 }
 i = 0;
 for (k = 0; k < 10; k++){
 for (j = 0; j < bucket_cnt[k]; j++){
 arr[i] = bucket[k][j];
 i++;
 }
 }
 divisor *= 10;
 printf ("After pass %d : ", pass + 1);
 for (i = 0; i < n; i++)
 printf ("%d ", arr[i]);
 printf (" ");
 }
}
void counting_sort(int arr[], int n) {
 int arr1[10000];
 int x = arr[0];
 for (int i = 1; i < n; i++) {
 if (arr[i] > x)
 x = arr[i];
 }
 int count_arr[10000];
 for (int i = 0; i <= x; ++i) {
 count_arr[i] = 0;
 }
 for (int i = 0; i < n; i++) {
 count_arr[arr[i]]++;
 }
 for (int i = 1; i <= x; i++) {
 count_arr[i] += count_arr[i - 1];
 }
 for (int i = n - 1; i >= 0; i--) {
 arr1[count_arr[arr[i]] - 1] = arr[i];
 count_arr[arr[i]]--;
 }
 for (int i = 0; i < n; i++) {
 arr[i] = arr1[i];
 }

 printf("The sorted array after counting sort is: ");
 for (int i = 0; i < n; ++i) {
 printf("%d ", arr[i]);
 }
 printf("\n");
}