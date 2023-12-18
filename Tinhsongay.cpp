package main

import (
 "fmt"
)

func main() {
 var d1, m1, y1, d2, m2, y2 int
 fmt.Scan(&d1, &m1, &y1, &d2, &m2, &y2)
 a := map[int]int{1: 31, 3: 31, 5: 31, 7: 31, 8: 31, 10: 31, 12: 31, 4: 30, 6: 30, 9: 30, 11: 30, 2: 28}
 var x, y int
 tong := 0
 x = 0
 for i := (y1 + 1); i <= y2; i++ {
  tong += 365
  if (i%400 == 0) || (i%4 == 0 && i%100 != 0) {
   tong++
  }
 }
 for i := (m1 + 1); i <= 12; i++ {
  x += a[i]
  if i == 2 {
   if (y1%400 == 0) || (y1%4 == 0 && y1%100 != 0) {
    x++
   }
  }
 }
 x += (a[m1] - d1 + 1)
 if m1 == 2 && ((y1%400 == 0) || (y1%4 == 0 && y1%100 != 0)) {
  x++
 }
 for i := (m2 + 1); i <= 12; i++ {
  y += a[i]
  if i == 2 {
   if (y2%400 == 0) || (y2%4 == 0 && y2%100 != 0) {
    y++
   }
  }
 }
 y += (a[m2] - d2 + 1)
 if m2 == 2 && ((y2%400 == 0) || (y2%4 == 0 && y2%100 != 0)) {
  y++
 }
 fmt.Printf("%v", tong+x-y)
 // fmt.Printf("%v %v %v", tong, x, y)
}