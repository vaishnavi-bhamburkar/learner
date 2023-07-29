/*
1) Write a program to create a list of natural numbers till 20 and print it.

#include <stdio.h>

int main() {
    int numbers[20];
    int i;
    
    // Create a list of natural numbers till 20
    for (i = 1; i <= 20; i++) {
        numbers[i-1] = i;
    }
    
    // Print the list of numbers
    for (i = 0; i < 20; i++) {
        printf("%d ", numbers[i]);
    }
    
    return 0;
}



2) Write a program to input 5 names from the user and print them.

#include <stdio.h>
int main() {
    char names[5][20];
    int i;
    // Input 5 names from the user
    printf("Enter 5 names:\n");
    for (i = 0; i < 5; i++) {
        scanf("%s", names[i]);
    }
    // Print the list of names
    printf("The names you entered are:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}



3) Given a list and its size, print the list in reverse order. (l=[5,4,9,2,1,0])

#include <stdio.h>

int main() {
    int l[] = {5, 4, 9, 2, 1, 0};
    int size = 6;
    
    printf("Original list: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", l[i]);
    }
    printf("\n");
    
    printf("Reversed list: ");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", l[i]);
    }
    printf("\n");
    
    return 0;
}



4) Given a list and its size, print alternate elements from the last.(l=[5,4,9,2,1,0])

#include <stdio.h>

int main() {
    int l[] = {5, 4, 9, 2, 1, 0};
    int size = 6;
    
    printf("Original list: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", l[i]);
    }
    printf("\n");
    
    printf("Alternate elements from the last: ");
    for (int i = size - 2; i >= 0; i -= 2) {
        printf("%d ", l[i]);
    }
    printf("\n");
    
    return 0;
}


5) Given a list [‘a’, 1, ‘2’, 5, ‘b’, ‘q’]. Print the last ‘i’ elements of any given list. ‘i’ accepted from the user. 

#include <stdio.h>

int main() {
    char l[] = {'a', 1, '2', 5, 'b', 'q'};
    int size = 6;
    int i;
    
    printf("Enter the value of i: ");
    scanf("%d", &i);
    
    if (i >= size) {
        printf("Error: i must be less than the size of the list.\n");
        return 1;
    }
    
    printf("Original list: ");
    for (int j = 0; j < size; j++) {
        printf("%c ", l[j]);
    }
    printf("\n");
    
    printf("Last %d elements of the list: ", i);
    for (int j = size - i; j < size; j++) {
        printf("%c ", l[j]);
    }
    printf("\n");
    
    return 0;
}




6) Given a list ([1,2,3,4,5,6,7]), take a number from the user and check whether it exists in the list or not.

#include <stdio.h>

int main() {
   int arr[] = {1, 2, 3, 4, 5, 6, 7};
   int n, i, flag = 0;
   
   printf("Enter a number: ");
   scanf("%d", &n);
   
   for(i=0; i<7; i++) {
      if(arr[i] == n) {
         flag = 1;
         break;
      }
   }
   
   if(flag == 1)
      printf("%d exists in the list.", n);
   else
      printf("%d does not exist in the list.", n);
   
   return 0;
}



7) Write a program to create a list of 7 numbers from the user, and print true if the complete list consists of consecutive numbers or not.

#include <stdio.h>

int main() {
   int arr[7];
   int i, flag = 1;
   
   printf("Enter 7 numbers: ");
   for(i=0; i<7; i++)
      scanf("%d", &arr[i]);
   
   for(i=0; i<6; i++) {
      if(arr[i]+1 != arr[i+1]) {
         flag = 0;
         break;
      }
   }
   
   if(flag == 1)
      printf("The list consists of consecutive numbers.");
   else
      printf("The list does not consist of consecutive numbers.");
   
   return 0;
}



8) Make a flowchart to find the sum and average of elements in a list. Take elements as input from the user.

#include <stdio.h>

int main() {
   int n, i;
   float arr[100], sum = 0.0, avg;
   
   printf("Enter the number of elements: ");
   scanf("%d", &n);
   
   while(n > 100 || n < 1) {
      printf("Error! number should be in range of (1 to 100).\n");
      printf("Enter the number again: ");
      scanf("%d", &n);
   }
   
   for(i=0; i<n; ++i) {
      printf("%d. Enter number: ", i+1);
      scanf("%f", &arr[i]);
      sum += arr[i];
   }
   
   avg = sum / n;
   printf("Sum = %.2f\n", sum);
   printf("Average = %.2f\n", avg);
   
   return 0;
}



9) Make a flowchart to count the total occurrences of a number in the list. Input the numbers from the user.

#include <stdio.h>

int main() {
    int num, count = 0, n, i;
    printf("Enter the size of the list: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the list: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to count: ");
    scanf("%d", &num);
    for (i = 0; i < n; i++) {
        if (arr[i] == num) {
            count++;
        }
    }
    printf("The total occurrences of %d in the list is %d\n", num, count);
    return 0;
}



10) Make a flowchart to count positive and negative elements in a list. Take elements as input from the user.

#include <stdio.h>

int main() {
   int n, i, a[100], countPositive = 0, countNegative = 0;

   printf("Enter the number of elements: ");
   scanf("%d", &n);

   for (i = 0; i < n; i++) {
      printf("Enter element %d: ", i+1);
      scanf("%d", &a[i]);
      if (a[i] > 0) {
         countPositive++;
      } else {
         countNegative++;
      }
   }

   printf("Number of positive elements: %d\n", countPositive);
   printf("Number of negative elements: %d\n", countNegative);

   return 0;
}



11) Make a flowchart to print duplicates in a list.

#include <stdio.h>
#include <stdbool.h>
int main() 
{
   int n, i, j, a[100], visited[100] = {0};

   printf("Enter the number of elements: ");
   scanf("%d", &n);

   printf("Enter the elements:\n");
   for (i = 0; i < n; i++) 
   {
      scanf("%d", &a[i]);
   }

   printf("Duplicate elements are: ");
   for (i = 0; i < n-1; i++) 
   {
      for (j = i+1; j < n; j++) 
      {
         if (a[i] == a[j] && visited[j] != true)
         {
            printf("%d ", a[i]);
            visited[j] = true;
         }
      }
   }

   return 0;
}


/*
12) Create a list that stores first n even numbers. Take n as input from the user.

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    int even_list[n];
    for(i=0; i<n; i++) {
        even_list[i] = (i+1)*2;
    }
    printf("List of the first %d even numbers: ", n);
    for(i=0; i<n; i++) {
        printf("%d ", even_list[i]);
    }
    return 0;
}
*/


/*
13) Create a list that stores first n odd numbers. Take n as input from the user.

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    int odd_list[n];
    for(i=0; i<n; i++) {
        odd_list[i] = (i*2) + 1;
    }
    printf("List of the first %d odd numbers: ", n);
    for(i=0; i<n; i++) {
        printf("%d ", odd_list[i]);
    }
    return 0;
}


/*
14) Create a list that stores all the factors of a number n. Take n as input from the user.

#include <stdio.h>

int main() {
    int n, i, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int factors[n];  // assuming the maximum number of factors is n
    for(i=1; i<=n; i++) {
        if(n%i == 0) {
            factors[count] = i;
            count++;
        }
    }
    printf("List of factors of %d: ", n);
    for(i=0; i<count; i++) {
        printf("%d ", factors[i]);
    }
    return 0;
}
*/


/*
15) Create a list that stores all the prime numbers up to n. Take n as input from the user.

#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, i, j;
    bool is_prime;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Prime numbers up to %d: ", n);
    for(i=2; i<=n; i++) {
        is_prime = true;
        for(j=2; j<=i/2; j++) {
            if(i%j == 0) {
                is_prime = false;
                break;
            }
        }
        if(is_prime) {
            printf("%d ", i);
        }
    }
    return 0;
}
*/


/*
16) Create a list that stores perfect numbers up to n. Take n as input from the user.

#include <stdio.h>

int main() {
    int n, i, j, sum;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Perfect numbers up to %d: ", n);
    for(i=2; i<=n; i++) {
        sum = 0;
        for(j=1; j<i; j++) {
            if(i%j == 0) {
                sum += j;
            }
        }
        if(sum == i) {
            printf("%d ", i);
        }
    }
    return 0;
}
*/


/*
17) Create a list that stores Armstrong numbers up to n. Take n as input from the user.

#include <stdio.h>
#include <math.h>

int main() {
    int n, num, temp, sum, digits, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Armstrong numbers up to %d: ", n);
    for(i=1; i<=n; i++) {
        num = i;
        sum = 0;
        digits = (int)log10(num) + 1;
        while(num > 0) {
            temp = num % 10;
            sum += pow(temp, digits);
            num /= 10;
        }
        if(sum == i) {
            printf("%d ", i);
        }
    }
    return 0;
}
*/


/*
18) Create a list that stores the factorial of first n natural numbers. Take n as input from the user.

#include <stdio.h>

int main() {
    int n, i, j, factorial;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of first %d natural numbers: ", n);
    for(i=1; i<=n; i++) {
        factorial = 1;
        for(j=1; j<=i; j++) {
            factorial *= j;
        }
        printf("%d ", factorial);
    }
    return 0;
}
*/


/*
19) Write a program to create a list of 10 numbers from the user, and count the number of odd and even numbers.

#include <stdio.h>

int main() {
    int nums[10], i, count_odd = 0, count_even = 0;
    printf("Enter 10 numbers:\n");
    for(i=0; i<10; i++) {
        scanf("%d", &nums[i]);
        if(nums[i] % 2 == 0) {
            count_even++;
        } else {
            count_odd++;
        }
    }
    printf("Number of even numbers: %d\n", count_even);
    printf("Number of odd numbers: %d\n", count_odd);
    return 0;
}
*/


/*
20) Write a program to create a list of 10 numbers from the user,  and sum the elements on odd positions as odds and on even positions as evens.

#include <stdio.h>

int main() {
    int nums[10], i, sum_odd = 0, sum_even = 0;
    printf("Enter 10 numbers:\n");
    for(i=0; i<10; i++) {
        scanf("%d", &nums[i]);
        if(i % 2 == 0) {
            sum_even += nums[i];
        } else {
            sum_odd += nums[i];
        }
    }
    printf("Sum of even-positioned numbers: %d\n", sum_even);
    printf("Sum of odd-positioned numbers: %d\n", sum_odd);
    return 0;
}
*/



/*
21) Construct a flowchart to create a list of n items where n is input from the user. Then input n names from the user and add them to the list

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    char **names;
    printf("Enter the number of names: ");
    scanf("%d", &n);
    names = (char**) malloc(n * sizeof(char*));
    for(i = 0; i < n; i++) {
        names[i] = (char*) malloc(50 * sizeof(char));
        printf("Enter name %d: ", i+1);
        scanf("%s", names[i]);
    }
    printf("The list of names is:\n");
    for(i = 0; i < n; i++) {
        printf("%d. %s\n", i+1, names[i]);
    }
    for(i = 0; i < n; i++) {
        free(names[i]);
    }
    free(names);
    return 0;
}
*/




#include <stdio.h>

int main() {
    int numbers[20];
    int* ptr=numbers;
    int i;
    
    // Create a list of natural numbers till 20
    for (i = 0; i <= 20; i++) {
        *(ptr+i) = i+i;
    }
    
    // Print the list of numbers
    for (i = 0; i < 20; i++) {
        printf("%d ", *(ptr+i));
    }
    
    return 0;
}









