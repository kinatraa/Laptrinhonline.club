package main

import (
 "fmt"
)

var cot, cheo1, cheo2 = [30]int{}, [30]int{}, [30]int{}
var cnt int

func backtrack(i, n int){
 for j := 1; j <= n; j++ {
  if (i == j) || (i == n-j+1) {
   continue
  }
  if cot[j] == 1 && cheo1[i-j+n] == 1 && cheo2[i+j-1] == 1 {
   cot[j] = 0
   cheo1[i-j+n] = 0
   cheo2[i+j-1] = 0
   if i == n {
    cnt++
   }else{
    backtrack(i+1, n)
   }
   cot[j] = 1
   cheo1[i-j+n] = 1
   cheo2[i+j-1] = 1
  }
 }
}

func solve() {
 var n int
 fmt.Scan(&n)
 for i := 0; i < 30; i++ {
  cot[i] = 1
  cheo1[i] = 1
  cheo2[i] = 1
 }
 cnt = 0
 backtrack(1, n)
 fmt.Print(cnt)
}

func main() {
 solve()
}