package main

import (
 "fmt"
)

func start(a *[1000005]int) {
 cnt := 0
 var tmp int
 for i := 1; i <= 1000000; i++ {
  tmp = i
  cnt = 0
  for {
   cnt++
   if tmp == 1 {
    break
   }
   if tmp <= 1000000 {
    if a[tmp] != 0 {
     cnt += a[tmp]
     cnt--
     break
    }
   }
   if tmp%2 == 0 {
    tmp /= 2
   } else {
    tmp = tmp*3 + 1
   }
  }
  (*a)[i] = cnt
 }
}

func main() {
 var i, j int
 a := [1000005]int{}
 start(&a)
 // for i := 0; i < 10; i++ {
 //  fmt.Print(a[i], "\n")
 // }
 for {
  fmt.Scan(&i, &j)
  Max := -1
  if i == 0 && j == 0 {
   break
  }
  if i < j {
   for k := i; k <= j; k++ {
    if a[k] > Max {
     Max = a[k]
    }
   }
  } else {
   for k := j; k <= i; k++ {
    if a[k] > Max {
     Max = a[k]
    }
   }
  }
  fmt.Printf("%v %v %v\n", i, j, Max)
 }
}