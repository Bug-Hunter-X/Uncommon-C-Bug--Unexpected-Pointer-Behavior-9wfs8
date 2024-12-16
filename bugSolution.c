int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; 
  int y = *ptr; 
  // Add explicit checks or error handling if needed 
  //Example: Check for null pointer before dereferencing
  if (ptr != NULL) {
    *ptr = 20;
    int y = *ptr; 
  } else {
    // Handle the null pointer case appropriately.
  }
  return 0;
}