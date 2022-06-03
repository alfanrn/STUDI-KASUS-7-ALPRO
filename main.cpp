#include <iostream>
#include <fstream>
#include "library/Class.h"
#include "library/Input.h"
#include "library/Proses.h"
#include "library/Output.h"

int main() {
  Sorting x;
  x.data();
  x.input();
  x.tofilea();

  x.getFile();
  x.urutkan();
  x.toFileb();

  x.output();
  x.cari();
  return 0;
}