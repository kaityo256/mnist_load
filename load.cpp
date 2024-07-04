#include <cstdio>
#include <fstream>
#include <iostream>

static uint8_t train_label[60000];
static uint8_t test_label[10000];
static uint8_t train_data[60000][28][28];
static uint8_t test_data[10000][28][28];

template <size_t N>
void show(uint8_t (&data)[N][28][28], uint8_t (&label)[N]) {
  for (int i = 0; i < 10; i++) {
    printf("label = %d\n", label[i]);
    for (int ix = 0; ix < 28; ix++) {
      for (int iy = 0; iy < 28; iy++) {
        if (data[i][ix][iy] > 128) {
          printf("*");
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }
  }
}

void load_file(const char *filename, char *data) {
  std::ifstream file(filename, std::ios::binary);
  file.seekg(0, std::ios::end);
  std::streamsize size = file.tellg();
  file.seekg(0, std::ios::beg);
  std::size_t filesize = size / sizeof(uint8_t);
  file.read(data, filesize);
}

int main() {
  load_file("mnist_train_data.dat", reinterpret_cast<char *>(train_data));
  load_file("mnist_train_label.dat", reinterpret_cast<char *>(train_label));
  load_file("mnist_test_data.dat", reinterpret_cast<char *>(test_data));
  load_file("mnist_test_label.dat", reinterpret_cast<char *>(test_label));
  printf("Dump Training data\n");
  show(train_data, train_label);
  printf("Dump Test data\n");
  show(test_data, test_label);
}