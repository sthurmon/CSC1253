int main() {
  int i=-1;
  while (true) {
    if (i<0) i*=-1;
    else {
      i++;
      i*=-1;
    }
  }
}
