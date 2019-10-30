//Binary Search in Java demonstrated using function call

class BinarySearchExample{  
 public static void binarySearch(int arr[], int first, int last, int key){  
   int mid = (first + last)/2;                                                 //Splitting array in half here.
   while( first <= last ){  
      if ( arr[mid] < key ){  
        first = mid + 1;     
      }else if ( arr[mid] == key ){                                           //Evaluates to TRUE if element is found at mid.
        System.out.println("Element is found at position: " + mid);  
        return;  
      }else{  
         last = mid - 1;  
      }  
      mid = (first + last)/2;  
   }  
   System.out.println("Element is not found!");  
 }  
 public static void main(String args[]){  
        int arr[] = {10,20,30,40,50};  
        int key = 30;  
        int last=arr.length-1;  
        binarySearch(arr,0,last,key);     
 }  
}
